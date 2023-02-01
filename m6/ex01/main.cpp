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
	Data *data;
	uintptr_t raw;

	data = new Data;
	data->n = 42;
	std::cout << "original: " << data->n << std::endl;
	raw = serialize(data);
	delete data;
	data = deserialize(raw);
	std::cout << "after: " << data->n << std::endl;
	return 0;
}