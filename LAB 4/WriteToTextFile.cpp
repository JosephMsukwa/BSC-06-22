#include <iostream>
#include <fstream>
using namespace std;

int main()  
{
    ofstream jomfile("red.txt");

    if (jomfile.is_open())
    {
        jomfile << " This is a line \n ";
        jomfile << " THis is another line \n ";
        jomfile << " This is the last one \n ";
        jomfile.close();
    }
    else
    {
        cout << " the file is unable to open \n ";
    }
    return 0;
}