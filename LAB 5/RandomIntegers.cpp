#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{ 
    
    srand(time(0));
    int daysUntilExpiration = rand() % 12;
    int num = daysUntilExpiration;
   
    
    
    if (num >= 11)
      {
      cout << " You still have an active subscription. " << endl;
      }  
      else if (num > 5)
      {
        cout << " Your subscription will expire soon."
             << " Renew now!" << endl;
      }
      else if (num == 0)
       {
        cout << " Your subscription has expired. " << endl;
       }
       else if(num == 1)
       {
       cout << " Your subscription expires within a day! " << endl;
       cout << " Renew now and save 20%!" << endl;
       }
       else 
       {
       cout << " Your subscription will expire in " << num << " days. " << endl;
       cout << " Renew now and save 10%! " << endl;
       }

   return 0;
}