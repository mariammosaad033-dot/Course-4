#include <iostream>
using namespace std;
struct stPiggyBank
{
    int Penny;
    int Nickel;
    int Dime;
    int Quarter;
    int Dollar;
};
stPiggyBank ReadPiggyBankContent()
{
    stPiggyBank PiggyBank;
    cout << "Enter number of Penny : ";
    cin >> PiggyBank.Penny;

    cout << "Enter number of Nickel : ";
    cin >> PiggyBank.Nickel;

    cout << "Enter number of Dime : ";
    cin >> PiggyBank.Dime;

    cout << "Enter number of  Quarter : ";
    cin >> PiggyBank.Quarter;

    cout << "Enter number of Dollar : ";
    cin >> PiggyBank.Dollar;

    return PiggyBank;
}
int CalculateTotalPennies(stPiggyBank PiggyBank)
{
    int TotalPennies = PiggyBank.Penny + PiggyBank.Nickel * 5 + PiggyBank.Dime * 10 + PiggyBank.Quarter * 25 + PiggyBank.Dollar * 100;
    return TotalPennies;
}
int main()
{
    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());
    cout << "Total Rennies = " << TotalPennies<<endl;
    cout << "Total Dollar = " << TotalPennies / 100.0<<endl;
    return 0;

}
