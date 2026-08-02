#include <iostream>
using namespace std;
int ReadNumber()
{
    int num;
    cout << "Please enter the number : ";
    cin >> num;
    return num;
}
void PrintRangeFrom1toNUsingForLoop(int num)
{
    cout << "Using For Loop" << endl;
    for (int i = 1;i <= num;i++)
    {
        cout << i << endl;
    }
}
void PrintRangeFrom1toNUsingWhileLoop(int num)
{
    cout << "Using While Loop" << endl;

    int i = 1;
    while (i <= num)
    {
        cout << i << endl;
        i++;
    }
}
void PrintRangeFrom1toNUsingDoWhileLoop(int num)
{
    cout << "Using Do While  Loop" << endl;

    int i=1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= num);
}
int main()
{
    int number = ReadNumber();
    PrintRangeFrom1toNUsingDoWhileLoop(number);
    PrintRangeFrom1toNUsingWhileLoop(number);
    PrintRangeFrom1toNUsingForLoop(number);
    return 0;
}
