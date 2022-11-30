#include <iostream>
using namespace std;
int main()
{

    int a = 10, b = 10, c = 20;
    cout  << a << " == " << b << " The output is: " << (a == b) << endl;
    cout  << a << " == " << c << " The output is: " << (a == c) << endl;
    cout  << a << " != " << c << " The output is: " << (a != c) << endl;
    cout  << a << " != " << b << " The output is: " << (a != b) << endl;
    cout  << a << " > " << b << " The output is: " << (a > b) << endl;
    cout  << a << " > " << c << " The output is: " << (a > c) << endl;
    cout  << a << " < " << b << " The output is: " << (a < b) << endl;
    cout  << a << " < " << c << " The output is: " << (a < c) << endl;
    cout  << a << " >= " << b << " The output is: " << (a >= b) << endl;
    cout  << a << " >= " << c << " The output is: " << (a >= c) << endl;
    cout  << a << " <= " << b << " The output is: " << (a <= b) << endl;
    cout  << a << " <= " << c << " The output is: " << (a <= c) << endl;
    return 0;
}