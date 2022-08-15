#pragma once
#include<string>
#include<vector>
//void findstr() {
//	string str = "zhu.de.cheng.@.qq.com";
//	//添加一个for循环
//	int i = 0;
//	vector<string>v;
//	int pos;
//	do{
//		
//		 pos = str.find(".");
//		int ves[]={0};
//		ves[i] = pos;	
//		int length = str.size();
//		str = str.substr(ves[i], length);
//		v.push_back(str);
//		i++;
//	} while (pos!=-1);
//	//创建游标的数组
//	vector<string>::iterator itBegin = v.begin();
//	vector<string>::iterator itEnd = v.end();
//	while (itBegin != itEnd) {
//		cout << *itBegin << endl;
//		itBegin++;
//	}	
//}
//void findstr() {
//	string str = "www.itcast.com.cn";
//	vector<string> v;
//	int start = 0;
//	int pos = -1;
//	while (true) {
//		pos = str.find(".", start);
//		if (pos == -1) {
//			string tempStr = str.substr(start, str.size() - start);
//			v.push_back(tempStr);
//			break;
//		}
//		string tempStr = str.substr(start, pos - start);
//		v.push_back(tempStr);
//		start = pos + 1;
//
//	}
//	for (vector<string>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//}