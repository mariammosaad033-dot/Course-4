#include <iostream>
#include<string>
using namespace std;
int ReadNumber(string Message)
{
    int number;
    cout << Message << endl;
    cin >> number;
    return number;
}
int Sum()
{
    int sum = 0, number = 0, counter = 1;
    do
    {
        number = ReadNumber("Please enter number " + to_string(counter));
        if (number == -99)
        {
            break;
        }
        sum += number;
        counter++;
    } while (number != -99);
        return sum;
}
int main()
{
    cout << Sum();
    return 0;
}
