#include <iostream>
using namespace std;
int ReadPINCode()
{
    int PINCode;
    cout << "Please enter the password : ";
    cin >> PINCode;
    return PINCode;
}
bool Login()
{
    int PINCode;
    int counter = 3;
    do
    {
        counter--;
        PINCode = ReadPINCode();
        if (PINCode == 1234)
        {
            return true;
        }
        else
        {
            system("color 4F");
            cout << "Wrong password , you have "<<counter<<" more tries"<<endl;
        }
    } while (counter>=1&&PINCode != 1234);
    return false;
}
int main()
{
    if (Login())
    {
        system("color 2f");
        cout << "\nYour account balance is " << 7500 << '\n';
    }
    else
    {
        cout << "\nYour card is blocked. Call the bank for help.\n";
    }
    return 0;
}
