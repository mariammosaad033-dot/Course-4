#include <iostream>
using namespace std;
enum enOddOrEven{odd=1,even=2};
int ReadNumber()
{
    int number;
    cout << "Please enter a number : ";
    cin >> number;
    return number;
}
enOddOrEven Check(int number)
{
    int Result = number % 2;
    if (Result == 0)
        return enOddOrEven::even;
    else
        return enOddOrEven::odd;
}
int PrintSumOfEven(int number)
{
    int sum = 0;
    for (int counter = 0;counter <= number;counter++)
    {
        if (Check(counter) == enOddOrEven::even)
            sum += counter;
    }
    return sum;
}
int main()
{
    cout<<PrintSumOfEven(ReadNumber());
    return 0;
}
