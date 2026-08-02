#include <iostream>
using namespace std;
int ReadAge()
{
    int age;
    do
    {
        cout << "Enter your age " << endl;
        cin >> age;
    } while (age <= 0);
    return age;
}
bool ValidateNumberInRange(int age,int from,int to)
{
    return (age >= from && age <= to);
}
void PrintResult(int age)
{
    if (ValidateNumberInRange(age,18,45))
        cout << age << " Valid Age" << endl;
    else
        cout << age << " InValid Age" << endl;
}
int main()
{
    PrintResult(ReadAge());
    return 0;
}
