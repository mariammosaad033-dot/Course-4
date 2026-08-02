#include <iostream>
#include<string>
using namespace std;
float ReadPositiveHours(string Message)
{
    float Hours;
    do
    {
        cout << Message << endl;
        cin >> Hours;
    } while( Hours <= 0);
    return Hours;
}
float HoursToDays(float Hours)
{
    return Hours / 24.0;
}
float HoursToWeeks(float Hours)
{
    return Hours / (7.0 * 24.0);
}

int main()
{
    float Hours = ReadPositiveHours("Please enter number of Hours : ");
    cout << "Hours = " << Hours << endl;
    cout << "Hours To Days = " << HoursToDays(Hours) << endl;
    cout << "Hours To Weeks = " << HoursToWeeks(Hours) << endl;
    return 0;
}
