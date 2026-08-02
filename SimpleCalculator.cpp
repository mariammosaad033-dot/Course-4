#include <iostream>
using namespace std;
enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };
int ReadNumber(string Message)
{
    int number;
    cout << Message << endl;
    cin >> number;
    return number;
}
enOperationType ReadOperationType()
{
    char OperationType;
    cout << "Please enter the type of operation (* , - , / , + ) : "<<endl;
    cin >> OperationType;
    return (enOperationType)OperationType;
}
float Calculate(int num1, int num2, enOperationType OperationType)
{
    switch (OperationType)
    {
    case enOperationType::Add:
        return num1 + num2;

    case enOperationType::Divide:
        return num1 / num2;

    case enOperationType::Multiply:
        return num1 * num2;

    case enOperationType::Subtract:
        return num1 - num2;

    default:
        return num1 % num2;
    }
}
int main()
{
    int number1 = ReadNumber("Please enter number 1 : ");
    int number2 = ReadNumber("Please enter number 2 : ");
    enOperationType OperationType = ReadOperationType();
    cout<<"Result = "<<Calculate(number1, number2, OperationType) << endl;
    return 0;
}
