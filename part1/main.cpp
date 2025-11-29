#include <iostream>
#include <vector>
#include <algorithm>


int main() {
	const int a = 10;
	int* p = const_cast<int*>(&a); // const_cast
	*p = 20; 
	std::cout << "Value of a: " << a << std::endl; // Undefined behavior
}