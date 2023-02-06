#include <iostream>
#include "whatever.hpp"

class Test {
	private:
		int _num;
	public:
		Test(int num): _num(num) {}
		bool operator==(Test const &other) const { return (this->_num == other._num); }
		bool operator!=(Test const &other) const { return (this->_num != other._num); }
		bool operator>(Test const &other) const { return (this->_num > other._num); }
		bool operator<(Test const &other) const { return (this->_num < other._num); }
		bool operator>=(Test const &other) const { return (this->_num >= other._num); }
		bool operator<=(Test const &other) const { return (this->_num <= other._num); }
		int	getNum() const { return (this->_num); }
};

std::ostream &operator<<(std::ostream &out, const Test &t) {
	out << t.getNum();
	return out;
}

int main() {
	int i1 = 1;
	int i2 = 20;
	char c1 = 'a';
	char c2 = 'z';
	float f1 = 1.0f;
	float f2 = 20.0f;
	double d1 = 1.0;
	double d2 = 20.0;
	Test t1 = Test(1);
	Test t2 = Test(20);

	std::cout << ">>> int <<<" << std::endl;
	std::cout << "[before swap] i1: " << i1 << ", i2: " << i2 << std::endl;
	swap<int>(i1, i2);
	std::cout << "[after swap] i1: " << i1 << ", i2: " << i2 << std::endl;
	std::cout << "[min] " << min<int>(i1, i2) << std::endl;
	std::cout << "[max] " << max<int>(i1, i2) << std::endl;

	std::cout << "\n>>> char <<<" << std::endl;
	std::cout << "[before swap] c1: " << c1 << ", c2: " << c2 << std::endl;
	swap<char>(c1, c2);
	std::cout << "[after swap] c1: " << c1 << ", c2: " << c2 << std::endl;
	std::cout << "[min] " << min<char>(c1, c2) << std::endl;
	std::cout << "[max] " << max<char>(c1, c2) << std::endl;

	std::cout << "\n>>> float <<<" << std::endl;
	std::cout << "[before swap] f1: " << f1 << ", f2: " << f2 << std::endl;
	swap<float>(f1, f2);
	std::cout << "[after swap] f1: " << f1 << ", f2: " << f2 << std::endl;
	std::cout << "[min] " << min<float>(f1, f2) << std::endl;
	std::cout << "[max] " << max<float>(f1, f2) << std::endl;

	std::cout << "\n>>> double <<<" << std::endl;
	std::cout << "[before swap] d1: " << d1 << ", d2: " << d2 << std::endl;
	swap<double>(d1, d2);
	std::cout << "[after swap] d1: " << d1 << ", d2: " << d2 << std::endl;
	std::cout << "[min] " << min<double>(d1, d2) << std::endl;
	std::cout << "[max] " << max<double>(d1, d2) << std::endl;

	std::cout << "\n>>> Test <<<" << std::endl;
	std::cout << "[before swap] t1: " << t1 << ", t2: " << t2 << std::endl;
	swap<Test>(t1, t2);
	std::cout << "[after swap] t1: " << t1 << ", t2: " << t2 << std::endl;
	std::cout << "[min] " << min<Test>(t1, t2) << std::endl;
	std::cout << "[max] " << max<Test>(t1, t2) << std::endl;

	return 0;
}
