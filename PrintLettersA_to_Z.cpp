#include <iostream>
using namespace std;
void PrintLettersA_to_Z()
{
    for (int counter = 65; counter <= 90; counter++)
    {
        cout << char(counter) << endl;
    }
}
int main()
{
    PrintLettersA_to_Z();
    return 0;
}
