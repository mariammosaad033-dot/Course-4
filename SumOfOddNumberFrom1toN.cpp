#include<iostream>
using namespace std;
enum enOddOrEven{Odd=1,Even=2};
int ReadNumber()
{
    int number;
    cout << "Please enter the number : ";
    cin >> number;
    return number;
}
enOddOrEven checknumber(int number)
{
    int Result = number % 2;
    if (Result != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}
int PrintSumOsOdd(int num)
{
    int sum = 0;
    for (int counter = 1;counter <= num;counter++)
    {
        if (checknumber(counter) == enOddOrEven::Odd)
        {
            sum += counter;
        }
    }
    return sum;
}
int main()
{
    cout << PrintSumOsOdd(ReadNumber());
    return 0;
}
