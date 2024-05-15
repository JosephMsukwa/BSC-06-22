#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // create and open a text file
    ofstream jomfile("josephfile.txt");

    //close the file
    jomfile.close();

    return 0;
}
