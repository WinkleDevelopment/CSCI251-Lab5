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

template<typename T>
T funcExp(T list[], int size) {
	int j;
	T x = list[0];
	T y = list[size - 1];

	for (j = 1; j < (size - 1) / 2; j++) {
		if (x < list[j])
			x = list[j];
		if (y > list[j])
			y = list[size - 1 - j];
	}

	return (x + y);

}

int main() {
	
	int list[8] = { 1,2,9,3,5,8,13,10 };

	string strList[] = { "one","fish","two","fish","red","fish","blue","fish" };

	cout << funcExp(list, 8) << " :: " << funcExp(strList, 8) << endl;

}

/*

	The result generated from the method is '17 :: twoblue'

*/