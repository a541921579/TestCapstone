#pragma once
#include <windows.h>    
#include <tchar.h>        
#include <iostream>
#include <vector>
#include<set>
#include <map>
#include <stdio.h>
#include<stdarg.h>
using namespace std;

template <class T>
map<DWORD, T> func(int length, DWORD address, ...)
{
	va_list argList;

	map<DWORD, T> map;
	DWORD para;
	T * arg = (T *)address;
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		va_start(argList, address);
		arg = (T *)address + i;
		while (1)
		{		
			para = va_arg(argList, DWORD);
			if (para == 0) 
			{
				printf("+%d is: %x\n", i*sizeof(T), *arg);
				map[i * sizeof(T)] = *arg;
				break;
			}

			DWORD value = *((T *)para + i);
			count++;
			if (*arg != value) break;			
		}
		//printf("%d\n",count);
		count = 0;	
	}
	va_end(argList);
	printf("\n___________________________________\n");
}

map <DWORD, DWORD>  func1(map<DWORD, DWORD> map1, map<DWORD, DWORD> map2)
{
	map<DWORD, DWORD>::iterator iter1 = map1.begin();
	DWORD key;
	DWORD value;
	map<DWORD, DWORD>::iterator iter2;
	while (iter1 != map1.end())
	{
		key = iter1->first;
		value = iter1->second;
		
		iter2 = map2.find(key);
		if (iter2 == map2.end() || iter2->second == value)//其它map中不存在此元素，或者其它map中存在此元素,但值相等
		{
			map1.erase(key);
		}	
		++iter1;
	}

	printf("\n___________________________________\n");
	iter1 = map1.begin();
	while (iter1 != map1.end())
	{
		cout << "{ " << iter1->first << " , " << iter1->second << " } " << endl;
		iter1++;
	}
	return map1;
}

map <DWORD, DWORD>  func2(vector <map <DWORD, DWORD>> vct)
{
	map <DWORD, DWORD> map0 =vct.at(0);
	map<DWORD, DWORD>::iterator iter0 = map0.begin();
	DWORD key;
	DWORD value;
	map<DWORD, DWORD>::iterator iter_i;
	set<DWORD> valueSet;
	while (iter0 != map0.end())
	{
		key = iter0->first;
		value = iter0->second;	
		valueSet.clear();
		valueSet.insert(value);
		for (int i = 1; i < vct.size(); i++)
		{			
			map <DWORD, DWORD> map_i = vct.at(i);
			iter_i = map_i.find(key);
			if (iter_i == map_i.end()) break;//其它map中不存在此元素
			valueSet.insert(iter_i->second);

		}

		if (valueSet.size() < vct.size())//其它map中存在此元素,但值相等
		{
			map0.erase(key);
		}
		++iter0;
	}

	printf("\n___________________________________\n\n");
	iter0 = map0.begin();
	while (iter0 != map0.end())
	{
		cout << "{ " << iter0->first << " , " << iter0->second << " } " << endl;
		iter0++;
	}
	return map0;
}