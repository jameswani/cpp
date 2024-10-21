#include <iostream>
using namespace std;

int main(){

    cout << "The size of int: " << sizeof(int) << "bytes" << endl;
    cout << "The size of long: " << sizeof(long) << "bytes" << endl;
    cout << "The size of double: " << sizeof(double) << "bytes" << endl;

    double area = 5.4;
    cout << "The size of area: " << sizeof(area) << "bytes" << endl;
    int age = 24;
    cout << "The size of age: " << sizeof(age) << "bytes" << endl;

    return 0;
}