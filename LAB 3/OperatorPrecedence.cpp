#include<iostream>
using namespace std;

int main()
{
    int a = 20, b = 10, c = 15, d = 5, e;

    e = (a + b) * c / d;
    cout << "Value of (a + b) * c / d is : " << e << endl;

    e = ((a + b)*c)/d;
    cout << "Value of ((a + b)*c)/d is : " << e << endl;

    e = (a + b)* (c/d);
    cout << "Value of (a + b)* (c/d) is : " << e << endl;

    e = a + (b*c)/d;
    cout << "Value of a + (b*c)/d is : " << e << endl;

    return 0;
}