#include <iostream>
using namespace std;
int ReadNumber(string Message)
{
    int number;
    cout << Message << endl;
    cin >> number;
    return number;
}
int MaxOf2Number(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}
void PrintMax(int num)
{
    cout << "The max of two number is " << num << endl;
}
int main()
{
    int num1 = ReadNumber("enter number 1 ");
    int num2 = ReadNumber("enter number 2 ");

    PrintMax(MaxOf2Number(num1,num2));
    return 0;
}
