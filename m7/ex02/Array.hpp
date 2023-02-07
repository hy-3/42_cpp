#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {
	private:
		T *_array;
		unsigned int _size;
	public:
		Array(): _array(new T[]), _size(0) {}
		Array(unsigned int n): _array(new T[n]), _size(n) {}
		Array(const Array &arr) {
			for (int i = 0; i < _size; i++)
				this->_array[i] = arr->_array[i];
			this->_size = arr->_size;
		}
		~Array() { delete [] _array; }
		int size() const { return this->_size };
		Array &operator=(const Array &arr) {
			for (int i = 0; i < _size; i++)
				this->_array[i] = arr->_array[i];
			this->_size = arr->_size;
			return *this;
		}
		T &operator[](const unsined int n) {
			if (n >= _size)
				throw (std::out_of_range("specified index is out of range."));
			else
				return _array[n];
		}
};

#endif