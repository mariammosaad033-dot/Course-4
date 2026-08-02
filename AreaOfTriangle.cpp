#include <iostream>
using namespace std;
struct stTriangle
{
    double base;
    double height;
};
stTriangle GetTriangleInput()
{
    stTriangle Triangle;
    cout << "Please enter the base of Triangle : ";
    cin >> Triangle.base;
    cout << "Please enter the height of Triangle : ";
    cin >> Triangle.height;
    return Triangle;
}
double CalculateArea(stTriangle Triangle)
{
   return (Triangle.base / 2.0) * Triangle.height;
     
}
void PrintArea(double Area)
{
    cout << "Area of Triangle = " << Area<<endl;
}
int main()
{
    PrintArea(CalculateArea(GetTriangleInput()));
    return 0;
}
