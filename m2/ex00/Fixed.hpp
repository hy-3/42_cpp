#pragma once
#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed {
	private:
		int _fixedPoint;
		static int const _fractionalBits = 8;
	public:
		int getRawBits() const;
		void setRawBits(int const raw);
		Fixed();
		Fixed(Fixed &f);
		~Fixed();
		Fixed& operator=(const Fixed &f);
};

#endif