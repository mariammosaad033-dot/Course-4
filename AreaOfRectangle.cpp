#include <iostream>
using namespace std;
struct stRectangle
{
    double Width;
    double length;
};
stRectangle GetRectangleInput()
{
    stRectangle rectangle;
    cout << "Please enter the Length of Rectangle : ";
    cin >> rectangle.length;
    cout << "Please enter the Width of Rectangle : ";
    cin >> rectangle.Width;
    return rectangle;
}
double CalculateArea(stRectangle rectangle)
{
   return rectangle.length * rectangle.Width;
     
}
void PrintArea(double area)
{
    cout << "The Area of rectangle is " << area<<endl;
}
int main()
{
    PrintArea(CalculateArea(GetRectangleInput()));
    return 0;
}
