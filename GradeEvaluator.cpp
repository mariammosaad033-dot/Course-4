#include <iostream>
using namespace std;
int ReadGrade(int from,int to)
{
    int Grade;
    do
    {
        cout << "Please enter the grade between 0 and 100 ? "<<endl;
        cin >> Grade;

    } while (Grade<from || Grade>to);
   
    return Grade;
}
char GetGradeLetter(int Grade)
{
    if (Grade >= 90)
        return 'A';
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else 
        return 'F';
 }
int main()
{
    cout << "Result = " << GetGradeLetter(ReadGrade(0, 100));
    return 0;
}
