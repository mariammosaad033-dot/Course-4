#include <iostream>
using namespace std;
float ReadTotalSales()
{
    float Totalsales;
    cout << "Please enter Total sales : ";
    cin >> Totalsales;
    return Totalsales;
}
float GetComissionPercentage(float Totalsales)
{
    if (Totalsales > 1000000)
        return .01;
    else if (Totalsales > 500000 )
        return .02;
    else if (Totalsales > 100000 )
        return .03;
    else if (Totalsales > 50000 )
        return .05;
    else
        return 0.0;
}
float CalculateTotalComission(float Totalsales)
{
    int TotalComission = GetComissionPercentage(Totalsales) * Totalsales;
    return TotalComission;
}
int main()
{
    float Totalsales = ReadTotalSales();
    cout <<"Comission Percentage = "<< GetComissionPercentage(Totalsales)<<endl;
    cout <<"Total Comission = " << CalculateTotalComission(Totalsales)<<endl;
    return 0;
}
