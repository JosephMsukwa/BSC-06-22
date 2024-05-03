#include <iostream>
using namespace std;

double triangleArea(double b, double h);
double rectangleArea(double leng, double w);
double squareArea(const double l);

int main()
{
    double num1, num2, width, length;
    int i = 0;
    while(i < 5) // the conditon i < 5 will not be true since the continuation loop is out of while block
    {   
         cout << "Please select the area of the shape to calculate " << endl; 
         cout << "1.Square " << endl;
         cout << "2.Rectangle " << endl;
         cout << "3.Triangle " << endl;
         cout << "4.Quit Program" << endl;
         cout << "Enter selection : " << endl;
         
        int userInput;
        cin >> userInput;
        if (userInput == 3)
        {
            cout << " Enter the base of a triangle : " << endl;
            cin >> num1;
            cout << " Enter the height of a triangle : " << endl;
            cin >> num2;
            cout << " The area of triangle is " << triangleArea(num1, num2);
            cout << "\n"<< endl;
        }
        else if (userInput == 2)
        {
            cout << " Enter length of a rectangle : " << endl;
            cin >> length;
            cout << " Enter width of a rectangle : " << endl;
            cin >> width;
            cout << " The area of rectangle is " << rectangleArea(length, width);
            cout << "\n";
            
        }
        else if (userInput == 1)
        {
            cout << " Enter the length : " << endl;
            cin >> length;
            cout << " The area of square is " << squareArea(length);
            cout << "\n";
        }
        else if (userInput == 4)
        {
            return 0;
        }
        else
        {
            cout << "Your input was " << userInput << " which is an invalid input" << endl;
            cout << "Please enter a valid input!! " << endl;
        }
    }
    i++;
}
double triangleArea(double b, double h)
{
    double A = b * h * 0.5;
    return A;
}
double rectangleArea(double leng, double w)
{
   double A = leng * w;
   return A;
}
double squareArea(double l)
{
   double  A = l * l;
   return A;
}