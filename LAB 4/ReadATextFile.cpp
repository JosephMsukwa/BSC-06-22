#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()  
{
    string line;

    ofstream jomfile("joseph.txt");

    if(jomfile.is_open())
    {
       while(getline(jomfile,line))
       {
           cout << line << '\n';
       }
       jomfile.close();
    }
    else
    {
        cout << "unable to open file ";
    }
    return 0;
}