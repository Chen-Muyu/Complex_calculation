//complex0.h -- 

#ifndef COMPLEX0_H_
#define COMPLEX0_H_

#include<iostream>
using namespace std;

class complex
{
private:
	double real;//Real part
	double imaginary;//Imaginary part

public:
	complex();//default constructor
	complex(const double& A, const double& B);//constructor with arguments
	~complex();
	//operator overloding
	complex operator+(const complex& com);
	complex operator-(const complex& com);
	complex operator*(const complex& com);
	complex operator*(const double x);
	friend complex operator*(const double x, const complex& com);
	complex operator~();
	friend ostream& operator<<(ostream& os, const complex& com);
	friend istream& operator>>(istream& is, complex& com);


};

#endif // !COMPLEX0_H_
