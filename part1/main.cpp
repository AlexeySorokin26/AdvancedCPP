#include <iostream>
#include <vector>
#include <algorithm>

class Tmp {
	char d; // 1
	int a; // 4
	double c; // 8
};


void f(int) {}
void f(double) {}

int main() {
	void (*p)(int) = &f;
}