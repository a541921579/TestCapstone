// test.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//
#include <windows.h>    
#include <tchar.h>        
#include <iostream>
#include <stdio.h>
#include<stdarg.h>
#include <assert.h>
#include"U.h"
using namespace std;


int main()
{
	//char str[] = "Hello World��ã�����!";
 //   cout << str<<endl;
	//printf("%s\n", str);
	/*int i = 8;
	printf("%p\n", &i);
	int j = 34;
	int k = 90;*/
	//func<DWORD>(0x45,(DWORD)&i, (DWORD)&j, (DWORD)&k, 0);
	/*map<DWORD, DWORD> map0 = { {1,1}, {2,2},{3,3}, {4,4} , {5,5} , {6,6} , {7,7} , {8,8} , {9,9} };
	map<DWORD, DWORD> map1 = { {2,2},{3,4}, {4,8} , {5,7} , {6,5} , {7,3} , {8,8} };
	map<DWORD, DWORD> map2 = { {3,9}, {4,5}, {5,1} , {6,6} , {7,7} };
	vector <map<DWORD, DWORD>> vct = { map0 ,map1 ,map2 };

	map<DWORD, DWORD> map = func2(vct);*/

	// Allocate a 5 character array, which should have a valid memory address.
	char* arr = new char[5];

	// Create a null pointer, which should be an invalid memory address.
	char* null = (char*)0x0;
	

	assert(AfxIsValidAddress(arr, 5));
	assert(AfxIsValidAddress(null, 5));
	//map = func1(map, map3);
	system("pause");
	return 0;
}



// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�

// ����ʹ�ü���: 
//   1. ʹ�ý��������Դ�������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б��ڲ鿴����
//   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�
