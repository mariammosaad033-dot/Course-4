#include <iostream>
#include<string>
#include<cmath>
using namespace std;
struct stTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
int ReadNumberOfSeconds(string Message)
{
    int NumberOfSeconds;
    do
    {
        cout << Message << endl;
        cin >> NumberOfSeconds;
    } while (NumberOfSeconds <= 0);
    return NumberOfSeconds;
}
stTaskDuration SecondsToTaskDuration(int Seconds)
{
    stTaskDuration TaskDuration;

    const int SecondPerDay = 24 * 60 * 60;
    const int SecondPerHour = 60 * 60;
    const int SecondPerMinute = 60;

    int Remainder=0;

    TaskDuration.NumberOfDays = floor(Seconds / SecondPerDay);
    Remainder = Seconds % SecondPerDay;

    TaskDuration.NumberOfHours = floor(Remainder / SecondPerHour);
    Remainder = Remainder % SecondPerHour;

    TaskDuration.NumberOfMinutes =floor( Remainder / SecondPerMinute);
    Remainder = Remainder % SecondPerMinute;

    TaskDuration.NumberOfSeconds = Remainder;
    return TaskDuration;

}
void PrintTaskDurationDetails(stTaskDuration TaskDuration)
{
    cout << TaskDuration.NumberOfDays << " : "
        << TaskDuration.NumberOfHours << " : "
        << TaskDuration.NumberOfMinutes << " : "
        << TaskDuration.NumberOfSeconds << endl;

}

int main()
{
    PrintTaskDurationDetails(SecondsToTaskDuration(ReadNumberOfSeconds("Please enter number of seconds : ")));
    return 0;
}
