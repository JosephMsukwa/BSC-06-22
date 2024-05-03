#include <iostream>
using namespace std;

int main()
{
    int x;
    
    cout << " Enter an integer between 5 and 10 " << endl;

    while(!(cin >> x))
     
        if(x > 5 && x < 10)
        {
        cout << " Your input was " << x << " has been accepted. "<< endl;
      
        }
        else {
        cout << " You entered " << x << " Please enter a value between 5 and 10 " << endl;
        }
        
         
        
        
        
    
    return 0;
}