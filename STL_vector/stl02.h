#pragma once
//关于双向队列的相关运算
#include <deque>
using namespace std;
void stlo2() {
	deque<int> d;
	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	d.push_back(4);
	int length=d.size();
	cout << length << endl;  
}