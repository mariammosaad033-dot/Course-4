#include <iostream>
using namespace std;

enum enMark{Pass=1,Fail=2};

int ReadMark(int From,int To)
{
    int Mark;
    do 
    {
        cout << "Please enter your Mark ";
        cin >> Mark;
    } while (Mark<From || Mark>To);
    return  Mark;
}

enMark CheckMark(int Mark)
{
    if (Mark >= 50)
        return enMark::Pass;
    else
        return enMark::Fail;
}

void PrintResult(enMark Mark)
{
    if (Mark==enMark::Pass)
        cout << "Pass"<<endl;
    else
        cout << "Fail"<<endl;
}

int main()
{
    PrintResult(CheckMark(ReadMark(1,100)));
    return 0;
}
