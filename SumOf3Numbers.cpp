#include <iostream>
using namespace std;

void ReadNumbers(int &num1, int &num2, int &num3)
{
	cout << "Please enter a number 1 : ";
	cin >> num1;
	cout << "Please enter a number 2 : ";
	cin >> num2;
	cout << "Please enter a number 3 : ";
	cin >> num3;
}
int SumOfNumbers(int num1,int num2,int num3)
{
	return num1 + num2 + num3;
}
void PrintSum(int Sum)
{
	cout << "Sum = "<< Sum<<endl;
}
int main()
{
	int num1, num2, num3;
	ReadNumbers(num1, num2, num3);
	PrintSum(SumOfNumbers(num1, num2, num3));
	return 0;
}

