#pragma once
#include<vector>
#include <algorithm>
using namespace std;
void test() {
	int arr[] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	for (int i = 0; i < len; i++) {
		cout <<  *(p++)<< endl;
	} 
}
void myPrint(int val) {
	cout << val<<endl;
}
//vector STL������ʹ��
void test02() {
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	vector<int>::iterator itBegin = v.begin();
	vector<int>::iterator itEnd = v.end();
	/*while (itBegin!=itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}*/
	//�ڶ��ֱ�����ʽ
	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}*/
	//�����ַ�ʽ
	for_each(v.begin(), v.end(),myPrint);
}					    