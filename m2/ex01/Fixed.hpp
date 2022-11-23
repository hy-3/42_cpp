#pragma once
#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int _fixedPoint;
		static int const _fractionalBits = 8;
	public:
		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;
		Fixed();
		Fixed(const int i);
		Fixed(const float i);
		Fixed(const Fixed &f);
		~Fixed();
		Fixed& operator=(const Fixed &f);
		Fixed& operator<<(const Fixed &f);
};

#endif
