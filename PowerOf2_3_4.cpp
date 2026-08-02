#include <iostream>
#include<cmath>
using namespace std;
int ReadNumber()
{
    int number;
    cout << "Please enter a number : ";
    cin >> number;
    return number;
}
void PowerOf2_3_4(int number)
{
    cout << number << " of power 2 = " << pow(number, 2)<<endl;
    cout << number << " of power 3 = " << pow(number, 3)<<endl;
    cout << number << " of power 4 = " << pow(number, 4)<<endl;
}
int main()
{
    PowerOf2_3_4(ReadNumber());
    return 0;
}

