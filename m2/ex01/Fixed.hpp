#pragma once
#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int _value;
		static int const _fractionalPart = 8;
	public:
		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed &f);
		~Fixed();
		Fixed& operator=(const Fixed &f);
};

std::ostream& operator<<(std::ostream &out, const Fixed &f);

#endif
