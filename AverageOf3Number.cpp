#include <iostream>
using namespace std;
int ReadMark(string Message ,int From,int To)
{
    int Mark;
    do
    {
        cout << Message << endl;
        cin >> Mark;
    } while (Mark<From || Mark>To);
    return Mark;
}
int SumOfMarks(int mark1, int mark2, int mark3)
{
    return mark1 + mark2 + mark3;   
}
float CalculateAverage(int mark1, int mark2, int mark3)
{
    return SumOfMarks(mark1, mark2, mark3) / 3.0;
     
}
void PrintAverage(float Average)
{
    cout << "Average = " << Average << endl;
}
int main()
{
    int mark1 = ReadMark("Please enter Mark1 between 1 & 100 ? ", 1, 100);
    int mark2 = ReadMark("Please enter Mark2 between 1 & 100 ? ", 1, 100);
    int mark3 = ReadMark("Please enter Mark3 between 1 & 100 ? ", 1, 100);

    PrintAverage(CalculateAverage(mark1, mark2, mark3));
    return 0;
}
