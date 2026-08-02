#include <iostream>
#include<cmath>
#include<string>
using namespace std;
int ReadNumber(string Message)
{
    int number;
    cout << Message<<endl;
    cin >> number;
    return number;
}
int PowerOfM(int number,int power)
{
   return pow(number, power);
}
int main()
{
    int Number = ReadNumber("Please enter a number  : ");
    int Power = ReadNumber("Please enter power : ");
    cout << "Result = " << PowerOfM(Number,Power);
    return 0;
}
