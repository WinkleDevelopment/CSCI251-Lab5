/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					     Lab 5
*
*/

// findMax.cpp
#include<iostream>
using namespace std;

template<typename T>
T findMax(T &a, T &b) {
    return (a > b) ? a : b;
}

int main() {

    int aInt = 20;
    int bInt = 50;

    char aChar = 'a';
    char bChar = 'b';

    float aFloat = 3.12f;
    float bFloat = 3.13f;

    double aDouble = 1.11;
    double bDouble = 2.22;

    cout << findMax<int>(aInt, bInt) << endl;
    cout << findMax<char>(aChar, bChar) << endl;
    cout << findMax<float>(aFloat, bFloat) << endl;
    cout << findMax<double>(aDouble, bDouble) << endl;
    return 0;
}