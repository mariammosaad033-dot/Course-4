#include <iostream>
using namespace std;
int ReadNumber()
{
    int number;
    cout << "Please enter the number : ";
    cin >> number;
    return number;
}
void PrintRangeNto1_UsingForLoop(int number)
{
    cout << "Using For Loop " << endl;
    for (int counter = number;counter >= 1;counter--)
    {
        cout << counter << endl;
    }
}
void PrintRangeNto1_UsingWhileLoop(int number)
{
    cout << "Using While Loop " << endl;

    int counter = number;
    while (counter >= 1)
    {
        cout << counter << endl;
        counter--;
    }
}
void PrintRangeNto1_UsingDoWhileLoop(int number)
{
    cout << "Using Do While Loop " << endl;

    int counter = number;
    do
    {
        cout << counter << endl;
        counter--;
    } while (counter >= 1);
}
int main()
{
    int number = ReadNumber();
    PrintRangeNto1_UsingForLoop(number);
    PrintRangeNto1_UsingWhileLoop(number);
    PrintRangeNto1_UsingDoWhileLoop(number);
    return 0;
}
