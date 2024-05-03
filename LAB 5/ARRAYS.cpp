#include <iostream>


using namespace std;
int main()
{
    string symbols[] = {"B123", "C243", "A345", "C15", "B177", "G3003", "C235", "B179"};
    
    for (string &element: symbols)
    { 
      if(element[0] == 'B')
       cout << element << endl;
    }
    return 0;
}