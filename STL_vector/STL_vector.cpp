// STL_vector.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
#include"stl01.h"
#include"stl02.h"
#include <algorithm>
#include<deque>
using namespace  std;
int main()
{
	std::cout << "STL的输出\n";
	vector<int> v;
	v.push_back(500);
	v.push_back(400);
	vector<int>::iterator itBegin = v.begin();
	vector<int>::iterator itEnd = v.end();
	while (itBegin != itEnd) {
		cout << *itBegin << endl;
		itBegin++;
	}
	stlo1();
	stlo2();
	//使用降序算法
	deque<int> v1;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(2);
	v1.push_back(5);
auto itBegin = v1.begin();
auto itEnd = v1.end();
	while (itBegin != itEnd) {
		*itBegin;
		itBegin++;

	}



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
