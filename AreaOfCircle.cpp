#include <iostream>
using namespace std;
double ReadRadius()
{
    double Radius;
    cout << "please enter the radius : ";
    cin >> Radius;
    return Radius;
}
double CalculateArea(double Radius)
{
    const double pi = 3.14;
    double Area = pi * pow(Radius, 2);
    return Area;
}
void PrintArea(double Area)
{
    cout << "Area of Circle = " << Area << endl;
}
int main()
{
    PrintArea(CalculateArea(ReadRadius()));
    return 0;
}
