// test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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
	//char str[] = "Hello World你好，世界!";
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



// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
