#include <iostream>
#include<string>
using namespace std;
struct stName
{
	string FirstName;
	string LastName;
};
stName ReadName()
{
	stName Name;
	cout << "Please enter your first name "<<endl;
	cin >> Name.FirstName;
	cout << "Please enter your last name "<<endl;
	cin >> Name.LastName;
	return Name;
}
string GetFullName(stName Name)
{
   return Name.FirstName +" "+ Name.LastName ;
}
void PrintFullName(string FullName)
{
	cout << "Full Name : " << FullName << endl;
}
int main()
{
	PrintFullName(GetFullName(ReadName()));
	return 0;
}
