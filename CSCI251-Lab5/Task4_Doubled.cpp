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

// Method/Class which doubles any input
template<typename T>
T doubled(T x) {
	return x + x;
}

class testClass {
private:
	int data;
	friend ostream& operator<<(ostream& out, const testClass &_testClass);
public:
	testClass();
	testClass(int x) : data(x) {}
	testClass operator+(const testClass& x) const;
};

ostream& operator<<(ostream& out, const testClass& _testClass) {
	
	out << _testClass.data;
	return out;

}

testClass testClass::operator+(const testClass& x) const {
	
	testClass tmp;

	tmp.data = this->data + x.data;

	return tmp;

}

int main() {

	double a = 26.2;
	float b = 6546.1;
	char c = 'c';
	string d = "Hello There!";
	int e = 42;

	testClass test(5);

	cout << doubled(a) << endl;
	cout << doubled(b) << endl;
	cout << doubled(c) << endl;
	cout << doubled(d) << endl;
	cout << doubled(e) << endl;

	return 0;

}