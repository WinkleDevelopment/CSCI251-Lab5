/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					     Lab 5
*
*/

#include <iostream>
using namespace std;

template <typename T>
T fib(T x) {
	T t_zero(0);
	T t_one(1);
	if (x <= 0)
		return t_zero;
	if (x <= 1)
		return t_one;
	T y = fib(x - 1) + fib(x - 2);
	return y;
}

int main() {

	// Show the method by using a different data type (Integer)
	int d = 3;
	cout << fib(d) << endl;

	// All Datatypes which are set over 4.00 will auto round to 5
	double e = 4.7;
	cout << fib(e) << endl;

	return 0;

}

/*

What is it trying to do?
	The method takes an input and performs the fibonacci sequence and its result is the the number at the input position.

When will it work on a type?
	The method does work with other datatypes (int) but doesn't accurately give a correct result.

*/