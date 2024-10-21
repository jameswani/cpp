#include <iostream>
using namespace std;
#include <limits>
#include <cfloat>

// INT_MIN, INT_MAX, LONG_MIN, LONG_MAX,
// FLT_MIN, FLT_MAX, DBL_MIN, and DBL_MAX in the <limits> 

int main(){
    //always use unsigned if you know the value in the variable will always be nonl-negative
    
    cout << "INT_MIN = " << INT_MIN << endl;
    cout << "INT_MAX = " << INT_MAX << endl;
    cout << "LONG_MIN = " << LONG_MIN << endl;
    cout << "LONG_MAX = " << LONG_MAX << endl;
    cout << "FLT_MIN = " << FLT_MIN << endl;
    cout << "FLT_MAX = " << FLT_MAX << endl;
    cout << "DBL_MIN = " << DBL_MIN << endl;
    cout << "DBL_MAX = " << DBL_MAX << endl;
    
    return 0;
}