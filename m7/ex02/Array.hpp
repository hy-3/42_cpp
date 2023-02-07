#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {
	private:
		T *_array;
		unsigned int _size;
	public:
		Array(): _array(new T[0]), _size(0) {}
		Array(unsigned int n): _array(new T[n]), _size(n) {}
		Array(const Array &arr) {
			T *tmp = new T[arr.size()];
			for (unsigned int i = 0; i < arr.size(); i++)
				tmp[i] = arr._array[i];
			this->_array = tmp;
			this->_size = arr.size();
		}
		~Array() { delete [] _array; }
		unsigned int size() const { return this->_size; };
		Array &operator=(const Array &arr) {
			T *tmp = new T[arr.size()];
			for (unsigned int i = 0; i < arr.size(); i++)
				tmp[i] = arr._array[i];
			this->_array = tmp;
			this->_size = arr.size();
			return *this;
		}
		T &operator[](const unsigned int n) {
			if (n >= _size)
				throw (std::out_of_range("specified index is out of range."));
			else
				return _array[n];
		}
};

#endif