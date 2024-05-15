#include <iostream>
using namespace std;

int main()
{
    int var1;
    int var2;
    int *influencer = nullptr;

    influencer = &var1;
    *influencer = 10;

    influencer = &var2;
    *influencer = 15;

    cout << "var1 is " << var1 << endl;
    cout << "var2 is " << var2 << endl;
    
    return 0;
} 