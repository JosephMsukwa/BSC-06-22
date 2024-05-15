#include <iostream>
using namespace std;

int main()
{
    int numbersArray[5];
    int *influencer = nullptr;
    influencer = numbersArray;

    *influencer = 10;

    influencer++;
    *influencer = 20;

    influencer = &numbersArray[2];
    *influencer = 30;

    influencer = numbersArray + 3;
    *influencer = 40;

    influencer = numbersArray;
    *(influencer + 4) = 50;

    for (int n = 0; n < 5; n++)
    {
        cout << numbersArray[n] << ",";
    }
    return 0;
} 