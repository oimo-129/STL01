#pragma once

#include<stdlib.h>
using namespace std;
void test03() {
	unsigned blocksize[] = { 1024 * 1024,1024,1 };
	unsigned maximum = 0;
	int  count;
	for (int i = 0; i < 3; i++) {
		for (count = 1;; count++) {
			void* block = malloc(maximum + blocksize[i] * count);
			if (block) {
				maximum = maximum + blocksize[i] * count;
				free(block);
			}
			else {
				break;
			}
		}
	}
	std::cout << "最大长度是" << maximum;
}