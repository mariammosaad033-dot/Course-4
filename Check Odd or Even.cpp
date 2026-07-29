#include <iostream>
using namespace std;
enum enNumberType{odd=1,even=2};
int ReadNumber()
{
	int number;
	cout << "Please enter a number : ";
	cin >> number;
	return number;
}
enNumberType CheckNumberType(int number)
{
	int result = number % 2;
	if (result == 0)
	{
		return enNumberType::even;
	}
	else
	{
		return enNumberType::odd;
	}
}
void PrintNumberType(enNumberType number)
{
	if (number == enNumberType::even)
	{
		cout << "The number is even"<<endl;
	}
	else
	{
		cout << "The number is odd"<<endl;
	}
}
int main()
{
	PrintNumberType(CheckNumberType(ReadNumber()));
	return 0;
}
