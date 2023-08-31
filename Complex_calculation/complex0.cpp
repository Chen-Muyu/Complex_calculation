//method
#include "complex0.h"

complex::complex()
{
	real = 0.0;
	imaginary = 0.0;
}

complex::complex(const double& A, const double& B)
{
	real = A;
	imaginary = B;
}

complex::~complex()
{
}

complex complex::operator+(const complex& com)
{
	complex result;
	result.real = real + com.real;
	result.imaginary = imaginary + com.imaginary;
	return result;
}

complex complex::operator-(const complex& com)
{
	complex result;
	result.real = real - com.real;
	result.imaginary = imaginary - com.imaginary;
	return result;
}

complex complex::operator*(const complex& com)
{
	complex result;
	result.real = (real * com.real) - (imaginary * com.imaginary);
	result.imaginary = real * com.imaginary + imaginary * com.real;
	return result;
}

complex complex::operator*(const double x)
{
	complex result;
	result.real = real * x;
	result.imaginary = imaginary * x;
	return result;
}

complex complex::operator~()
{
	complex result;
	result.real = real;
	result.imaginary = -imaginary;
	return result;
}

complex operator*(const double x, const complex& com)
{
	complex result;
	result.real = com.real * x;
	result.imaginary = com.imaginary * x;
	return result;
}

ostream& operator<<(ostream& os, const complex& com)
{
	if (com.imaginary > 0)
	{
		os << "(" << com.real << "+" << com.imaginary << "i)";
	}
	else if (com.imaginary < 0)
	{
		os << "(" << com.real << com.imaginary << "i)";
	}
	else
	{
		os << "(" << com.real << ")";
	}
	// TODO: 在此处插入 return 语句
	return os;
}

istream& operator>>(istream& is, complex& com)
{
	cout << "real: ";
	if (!(is >> com.real))
	{
		return is;
	}
	cout << "imaginary: ";
	is >> com.imaginary;	
	// TODO: 在此处插入 return 语句
	return is;
}
