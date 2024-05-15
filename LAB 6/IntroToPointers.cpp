#include <iostream>
using namespace std;

int main()
{
    int *web = nullptr;
    int luck = 30;
    web = &luck;
    
    cout << "  The value of luck      : " << luck << endl;
    cout << "  Address of luck        : " << &luck << endl;
    cout << "  Address assigned to pointer:" << web << endl;
    cout << "  Address of a pointer   : " << &web << endl;
    
    return 0;
} 