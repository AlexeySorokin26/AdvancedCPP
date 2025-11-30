#include <iostream>
#include <vector>
#include <algorithm>


int main(int argc, char* argv[]) {
	int x = 10;
	const double& y = x;
	x = 100;
	std::cout << y << std::endl;
}
