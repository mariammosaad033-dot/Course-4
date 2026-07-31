#include <iostream>
using namespace std;
int ReadNumber()
{
    int number;
    cout << "Please enter a number " << endl;
    cin >> number;
    return number;
}
float CalculateHalfOfNumber(int num)
{
    return num / 2.0;
}
void PrintResult(int num)
{
    cout << "The half of " << num << " = " << CalculateHalfOfNumber(num)<<endl;
}

int main()
{
    PrintResult(ReadNumber());
    return 0;
}
