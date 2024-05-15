#include <iostream>
using namespace std;

int main()
{
    int i, j;
    i = (j++, j + 100, 999 + j);
    cout << i;
    return 0;
}