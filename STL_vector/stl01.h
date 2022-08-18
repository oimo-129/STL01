#pragma once
using namespace std;
void stlo1() {
	vector<int> v;
	for (int i = 0; i < 10000; i++) {
		v.push_back(i);
	}
	cout << "vector的容量是" << v.capacity() << endl;
	cout << "vector的大小是" << v.size() << endl;
}