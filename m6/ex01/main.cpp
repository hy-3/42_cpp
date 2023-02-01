#include <iostream>

struct Data {
	int n;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {
	Data *data_1;
	Data *data_2;
	uintptr_t raw;

	data_1 = new Data;
	data_1->n = 42;
	std::cout << "data_1: " << data_1->n << std::endl;
	raw = serialize(data_1);
	delete data_1;
	data_2 = deserialize(raw);
	std::cout << "data_2: " << data_2->n << std::endl;
	return 0;
}