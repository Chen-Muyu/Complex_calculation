//user1.cpp
#include"complex0.h"

int main()
{
	complex a{ 3,4 };
	complex c;
	cout << "Enter a complex number (q to quit): \n";
	while (cin>>c)
	{
		cout << "c is " << c << endl;
		cout << "complex conjugate is " << ~c << endl;
		cout << "a is " << a << endl;
		cout << "a + c = " << a + c << endl;
		cout << "a - c = " << a - c << endl;
		cout << "a * c = " << a * c << endl;
		cout << "a * 4 = " << a * 4 << endl;
		cout << "2 * c = " << 2 * c << endl;
		cout << "Enter a complex number (q to quit): \n";
	}
	cout << "Done! " << endl;
	return 0;
}