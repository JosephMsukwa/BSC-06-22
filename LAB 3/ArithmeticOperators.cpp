#include <iostream>
using namespace std;

int main()
{
    int a = 21, b = 10;
    int c;

    c = a + b;
    cout << "line 1, c value is : " << c << endl;

    c = a - b;
    cout << "line 2, c value is : " << c << endl;

     c = a * b;
    cout << "line 3, c value is : " << c << endl;

     c = a / b;
    cout << "line 4, c value is : " << c << endl;

     c = a % b;
    cout << "line 5, c value is : " << c << endl;

     c = a ++;
    cout << "line 6, c value is : " << c << endl;

     c = a--;
    cout << "line 7, c value is : " << c << endl;
    return 0;
}