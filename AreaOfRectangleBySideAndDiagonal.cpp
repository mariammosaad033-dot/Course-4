#include <iostream>
#include<cmath>
using namespace std;
struct stRectangle
{
    double Side;
    double Diagonal;
};
stRectangle GetRectangleInput()
{
    stRectangle rectangle;
    cout << "Please enter the side of Rectangle : ";
    cin >> rectangle.Side;
    cout << "Please enter the diagonal of Rectangle : ";
    cin >> rectangle.Diagonal;
    return rectangle;
}
double CalculateArea(stRectangle rectangle)
{
   return rectangle.Side * (sqrt(pow(rectangle.Diagonal, 2) - pow(rectangle.Side, 2)));
}
void PrintArea(double area)
{
    cout << "The Area of rectangle is " << area << endl;
}
int main()
{
    PrintArea(CalculateArea(GetRectangleInput()));
    return 0;
}
