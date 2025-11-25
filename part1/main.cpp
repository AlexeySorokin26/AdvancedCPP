#include <iostream>
#include <vector>
#include <algorithm>

int& g() {
	int* p = new int(1);
	return *p;
}

int main() {
	int x = 0;
	int* p = &x;
	int*& ref = p;
}