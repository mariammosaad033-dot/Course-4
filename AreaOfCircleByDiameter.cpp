#include <iostream>
#include <cmath>
using namespace std;
float ReadDiameter()
{
    float diameter;
    cout << "Please enter the Diameter : ";
    cin >> diameter;
    return diameter;
}
float CalculateArea(float diameter)
{
    const double pi = 3.14;
    float Area = (pi * pow(diameter, 2)) / 4.0;
    return Area;
}
void PrintArea(float Area)
{
    cout << "Area of Circle = " << Area << endl;
}
int main()
{
    PrintArea(CalculateArea(ReadDiameter()));
    return 0;
}
