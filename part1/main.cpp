#include <iostream>
#include <vector>
#include <algorithm>

struct S {
private:
	int a;    // 4 
	double b; // 8
public:
	int GetA() const { return a; }
	double GetB() const { return b; }
};

int main(int argc, char* argv[]) {
	S s;

	reinterpret_cast<int&>(s) = 12;
	std::cout << s.GetA() << std::endl;

	char* tmp = reinterpret_cast<char*>(&s) + 8;
	reinterpret_cast<double&>(*tmp) = 34.56;
	std::cout << s.GetB() << std::endl;
}
