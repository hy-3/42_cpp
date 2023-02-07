#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

class Test {
	private:
		int _num;
	public:
		Test(): _num(1) {}
		Test(int num): _num(num) {}
		int getNum() const { return (this->_num); }
		void setNum(int n) { this->_num = n; }
};

std::ostream &operator<<(std::ostream &out, const Test &t) {
	out << t.getNum();
	return out;
}

int main() {
	{
		std::cout << "\n----- prepared test -----" << std::endl;
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;
	}
	{
		std::cout << "\n----- my test -----" << std::endl;
		Array<int> i = Array<int>(5);
		Array<char> c = Array<char>(5);
		Array<float> f = Array<float>(5);
		Array<double> d = Array<double>(5);
		Array<Test> t = Array<Test>(5);

		std::cout << "\n>>> int <<<" << std::endl;
		for (int n = 0; n < 5; n++)
			i[n] = n;
		Array<int> i_copy = i;
		i[0] = 100;
		std::cout << "i: ";
		for (int n = 0; n < 5; n++)
			std::cout << i[n] << " ";
		std::cout << std::endl;
		std::cout << "i_copy: ";
		for (int n = 0; n < 5; n++)
			std::cout << i_copy[n] << " ";
		std::cout << std::endl;

		std::cout << "\n>>> char <<<" << std::endl;
		for (int n = 0; n < 5; n++)
			c[n] = 'a' + n;
		Array<char> c_copy = Array<char>(c);
		c[0] = 'z';
		std::cout << "c: ";
		for (int n = 0; n < 5; n++)
			std::cout << c[n] << " ";
		std::cout << std::endl;
		std::cout << "c_copy: ";
		for (int n = 0; n < 5; n++)
			std::cout << c_copy[n] << " ";
		std::cout << std::endl;

		std::cout << "\n>>> float <<<" << std::endl;
		for (int n = 0; n < 5; n++)
			f[n] = static_cast<float>(n);
		Array<float> f_copy = f;
		f[0] = 100.0f;
		std::cout << "f: ";
		for (int n = 0; n < 5; n++)
			std::cout << f[n] << " ";
		std::cout << std::endl;
		std::cout << "f_copy: ";
		for (int n = 0; n < 5; n++)
			std::cout << f_copy[n] << " ";
		std::cout << std::endl;

		std::cout << "\n>>> double <<<" << std::endl;
		for (int n = 0; n < 5; n++)
			d[n] = static_cast<double>(n);
		Array<double> d_copy = d;
		d[0] = 100.0;
		std::cout << "d: ";
		for (int n = 0; n < 5; n++)
			std::cout << d[n] << " ";
		std::cout << std::endl;
		std::cout << "d_copy: ";
		for (int n = 0; n < 5; n++)
			std::cout << d_copy[n] << " ";
		std::cout << std::endl;

		std::cout << "\n>>> Test <<<" << std::endl;
		for (int n = 0; n < 5; n++)
			t[n] = Test(n);
		Array<Test> t_copy = t;
		t[0].setNum(100);
		std::cout << "t: ";
		for (int n = 0; n < 5; n++)
			std::cout << t[n].getNum() << " ";
		std::cout << std::endl;
		std::cout << "t_copy: ";
		for (int n = 0; n < 5; n++)
			std::cout << t_copy[n].getNum() << " ";
		std::cout << std::endl;

		std::cout << "\n>>> check: access to out of range <<<" << std::endl;
		try {
			std::cout << i[10] << std::endl;
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}

	}
	return 0;
}