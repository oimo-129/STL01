#pragma once
using namespace std;
void stlo1() {
	vector<int> v;
	for (int i = 0; i < 10000; i++) {
		v.push_back(i);
	}
	cout << "vector��������" << v.capacity() << endl;
	cout << "vector�Ĵ�С��" << v.size() << endl;
}