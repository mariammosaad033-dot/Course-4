#include <iostream>
using namespace std;
int ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number<0);
    return number;
}
int Factorial(int number)
{
    int Fact = 1;
    for (int counter = number; counter >=1; counter--)
    {
        Fact *= counter;
    }
    return Fact;
}
int main()
{
    cout <<"Factorial = " << Factorial(ReadPositiveNumber("Enter Number : "));
    return 0;
}
