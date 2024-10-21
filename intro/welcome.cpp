#include <iostream>
using namespace std;

int main(){
    
    double num1, num2, num3;
    
    cout << "Enter the numbers to calculate for average: "<<endl;
    cin >> num1 >> num2 >> num3;
    double average = (num1 + num2 + num3)/3;
    cout << "The value of average = " << average << endl;

    return 0;
}