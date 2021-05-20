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

void symbol(T value, char symbol, int size) {

	string str = "";

	for (int x = 0; x < size; x++) {
		str += symbol;
	}

	str += " " + value + " ";

	for (int x = 0; x < size; x++) {
		str += symbol;
	}

	cout << endl;

}

int main() {

	symbol<int>(47,'*',3);
	symbol<double>(360.5, ')(',8);
	symbol<string>("SuperMethod",'\/',2);

	return 0;
}