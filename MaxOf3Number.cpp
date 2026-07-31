#include <iostream>
using namespace std;
int ReadNumber(string Message)
{
    int number;
    cout << Message << endl;
    cin >> number;
    return number;
}
int GetMaxOf3Numbers(int num1, int num2, int num3)
{
    if (num1 > num2)
    {
        if (num1 > num3)
            return num1;
        else
            return num3;
    }
    else
    {
        if (num2 > num3)
            return num2;
        else
            return num3;
    }
}
void PrintMax(int max)
{
    cout << "The maximum number is " << max << endl;
}
int main()
{
    int num1 = ReadNumber("enter number 1 ");
    int num2 = ReadNumber("enter number 2 ");
    int num3 = ReadNumber("enter number 3 ");

    PrintMax(GetMaxOf3Numbers(num1, num2,num3));
    return 0;
}
