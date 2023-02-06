#include <iostream>
#include "iter.hpp"

class Test {
	private:
		int _num;
	public:
		Test(int num): _num(num) {}
		int	getNum() const { return (this->_num); }
};

std::ostream &operator<<(std::ostream &out, const Test &t) {
	out << t.getNum();
	return out;
}

template <typename T>
void show(T &t) {
	std::cout << t << std::endl;
}

int main() {
	int i[] = {1, 2, 3, 4, 5};
	char c[] = {'a', 'b', 'c', 'd', 'e'};
	float f[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
	double d[] = {1.0, 2.0, 3.0, 4.0, 5.0};
	Test t[] = {Test(1), Test(2), Test(3), Test(4), Test(5)};
	std::string s[] = {"abc", "123", "def", "456", "ghi"};

	std::cout << ">>> int <<<" << std::endl;
	iter<int>(i, sizeof(i) / sizeof(int), show);

	std::cout << "\n>>> char <<<" << std::endl;
	iter<char>(c, sizeof(c) / sizeof(char), show);

	std::cout << "\n>>> float <<<" << std::endl;
	iter<float>(f, sizeof(f) / sizeof(float), show);

	std::cout << "\n>>> double <<<" << std::endl;
	iter<double>(d, sizeof(d) / sizeof(double), show);

	std::cout << "\n>>> Test <<<" << std::endl;
	iter<Test>(t, sizeof(t) / sizeof(Test), show);

	std::cout << "\n>>> std::string <<<" << std::endl;
	iter<std::string>(s, sizeof(s) / sizeof(std::string), show);

	return 0;
}