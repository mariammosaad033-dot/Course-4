#include <iostream>
using namespace std;
void ReadNumber(int& num1, int& num2)
{
    cout << "Please enter number 1 : ";
    cin >> num1;
    cout << "Please enter number 2 : ";
    cin >> num2;
}
void SwapNumbers(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
void PrintNumber(int num1, int num2)
{
    cout << "Number 1  = " << num1<<endl;
    cout << "Number 2  = " << num2 << endl;
}
int main()
{
    int num1, num2;
    ReadNumber(num1, num2);
    PrintNumber(num1, num2);
    cout << "\n\nAfter swap \n\n";
    SwapNumbers(num1, num2);
    PrintNumber(num1, num2);
    return 0;
}
