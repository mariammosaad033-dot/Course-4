#include <iostream>
#include<string>
#include<cmath>
using namespace std;
enum enPrimeNotPrime{Prime=1,NotPrime=2};
int ReadPositiveNumber(string Message)
{
    int number;
    do 
    {
        cout << Message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
enPrimeNotPrime CheckPrime(int number)
{
    if (number < 2)
        return enPrimeNotPrime::NotPrime;
    else
    {
        int M = round(number / 2);
        for (int counter = 2;counter <= M;counter++)
        {
            if (number % counter == 0)
                return enPrimeNotPrime::NotPrime;
        }
        return enPrimeNotPrime::Prime;
    }
}
void PrintResult(int number)
{
    switch (CheckPrime(number))
    {
    case enPrimeNotPrime::NotPrime:
        cout << "Not Prime" << endl;
        break;
    case enPrimeNotPrime::Prime:
        cout << "Prime" << endl;
        break;
    }
}
int main()
{
    PrintResult(ReadPositiveNumber("Please enter a number : "));
    return 0;
}
