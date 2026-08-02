#include <iostream>
#include<string>
using namespace std;
enum enDaysOfWeek{sat=1,sun=2,mon=3,tue=4,wed=5,thu=6,fri=7};
int ReadNUmberOfDay(int From, int To, string Message)
{
    int NumberOfDay;
    do
    {
        cout << Message;
        cin >> NumberOfDay;
    } while (NumberOfDay<From || NumberOfDay>To);
    return NumberOfDay;
}
enDaysOfWeek ReadDayOfWeek()
{
    return (enDaysOfWeek)ReadNUmberOfDay(1, 7, "Please enter number of Day : ");
}
string PrintDayOfWeek(enDaysOfWeek DayOfWeek)
{
    switch (DayOfWeek)
    {
    case enDaysOfWeek::sat:
        return "Saturday";
    case enDaysOfWeek::sun:
        return "Sunday";
    case enDaysOfWeek::mon:
        return "Monday";
    case enDaysOfWeek::tue:
        return "Tuesday";
    case enDaysOfWeek::wed:
        return "Wednesday";
    case enDaysOfWeek::thu:
        return "Thursday";
    case enDaysOfWeek::fri:
        return "Friday";
    default: 
        return "not a valid day"; 
    }
}
int main()
{
  cout<<  PrintDayOfWeek(ReadDayOfWeek());
  return 0;
}
