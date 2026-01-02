#include <iostream>
#include <vector>
#include <algorithm>

struct G {
	int g;
};

struct D : virtual G {
	int d;
};

struct M : virtual G {
	int m;
};

struct S : M, D {
	int s;
};

int main(int argc, char* argv[]) {
	S s;
	std::cout << s.g << std::endl;
}
