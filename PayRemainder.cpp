#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message)
{
	float num;
	do {
		cout << Message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}
float CalculatePayRemainder(float TotalBill, float CashPaid)
{
	float Remainder = CashPaid - TotalBill;
	return Remainder;
}
int main()
{
	int TotalBill = ReadPositiveNumber("please enter Total Bill");
	int CashPaid = ReadPositiveNumber("Please enter Cash Paid ");
	cout << "Total Paid = " << TotalBill << endl;
	cout << "Cash Paid = " << CashPaid << endl;
	cout <<"Pay Remainder = " << CalculatePayRemainder(TotalBill, CashPaid) << endl;
	return 0;
}

