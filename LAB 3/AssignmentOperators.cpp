#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int c;

    c = a;
    cout << "LINE 1, -= OPERATOR, VALUE OF C IS : " << c << endl;

    c += a;
    cout << "LINE 2, += OPERATOR, VALUE OF C IS : " << c << endl;
     c -= a;
    cout << "LINE 3, -= OPERATOR, VALUE OF C IS : " << c << endl;
     c *= a;
    cout << "LINE 4, *= OPERATOR, VALUE OF C IS : " << c << endl;
     c /= a;
    cout << "LINE 5, /= OPERATOR, VALUE OF C IS : " << c << endl;
     c = 200;
     c %= a;
     cout << "LINE 6, -= OPERATOR, VALUE OF C IS : " << c << endl;
     c <<= 2;
    cout << "LINE 7, -= OPERATOR, VALUE OF C IS : " << c << endl;
     c >>= 2;
    cout << "LINE 8, -= OPERATOR, VALUE OF C IS : " << c << endl;
     c &= a;
    cout << "LINE 9, -= OPERATOR, VALUE OF C IS : " << c << endl;
     c ^= a;
    cout << "LINE 10, -= OPERATOR, VALUE OF C IS : " << c << endl;
    return 0;
}