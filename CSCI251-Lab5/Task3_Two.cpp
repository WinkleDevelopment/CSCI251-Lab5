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
#include <list>

using namespace std;

bool compint(const int& a, const int& b) {
	return a - 3 > b + 3;
}

int main() {

	list<int> mylist;

	mylist.push_back(33);
	mylist.push_back(12);
	mylist.push_back(13);
	mylist.push_back(9);
	mylist.push_back(15);
	mylist.push_back(23);
	mylist.push_back(13);
	mylist.push_back(3);

	mylist.sort(compint);

	list<int>::iterator p = mylist.begin();

	while (p != mylist.end()) {
		cout << *p << endl; p++;
	}

	return 0;
}

/*

  How do the two files differ?
	The 'mylist.push_back(#)' of each file are in a different order

  What do the programs do?
	To sort the list without the use of the .sort() inbuilt method

*/