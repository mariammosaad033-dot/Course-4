#include <iostream>
#include<string>
using namespace std;
struct stTaskDuration
{
    int Day, Hour, Minutes, Second;
};
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
stTaskDuration ReadTaskDuration()
{
    stTaskDuration TaskDuration;
    TaskDuration.Day=ReadPositiveNumber("Please enter number of Days : ");
    TaskDuration.Hour=ReadPositiveNumber("Please enter number of Hours : ");
    TaskDuration.Minutes = ReadPositiveNumber("Please enter number of Minutes : ");
    TaskDuration.Second = ReadPositiveNumber("Please enter number of Seconds : ");
    return TaskDuration;
}
int CalculateTaskDuration(stTaskDuration TaskDuration)
{
    return(TaskDuration.Second + TaskDuration.Minutes * 60 + TaskDuration.Hour * 60 * 60 + TaskDuration.Day * 24 * 60 * 60);
}

int main()
{
    cout << "Number of Second = " << CalculateTaskDuration(ReadTaskDuration());
    return 0;
}
