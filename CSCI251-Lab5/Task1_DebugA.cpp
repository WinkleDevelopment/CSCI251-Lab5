/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					     Lab 5
*
*/

// Get the average of an array
#include <iostream>
using namespace std;

template<typename T>

int getMedNum(T *arr, size_t n) {
    T sum = 0;
    for (size_t i = 0; i < n; i++) {
        sum += arr[i];
    }
    if (n > 0) {
        return (1 * sum) / (n);
    } else {
        return 100;
    }
}

int main() {
    int arrInt[] = { 1, 2, 4, 6, 3, -2 };
    double arrDou[] = { 1.11,2.22,3.11,4.22 };

    int aInt = getMedNum<int>(arrInt, sizeof(arrInt) / sizeof(int));
    double aDou = getMedNum<double>(arrDou, sizeof(arrDou) / sizeof(double));

    cout << "The average of integer array: " << aInt << endl;
    cout << "The average of double array: " << aDou << endl;

    return 0;
}