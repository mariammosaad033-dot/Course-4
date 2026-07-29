#include <iostream>
using namespace std;
struct stDriverInfo
{
	int Age;
	bool HasDriverLicense;
	bool HasRecommendation;
};
stDriverInfo ReadDriverInfo()
{
	stDriverInfo driver;
	cout << "Please enter your age : " ;
	cin >> driver.Age;
	cout << "Do you have a driver license ? "  ;
	cin >> driver.HasDriverLicense;
	cout << "Do you have a Recommendation ? ";
	cin >> driver.HasRecommendation;
	return driver;
} 
bool IsAccepted(stDriverInfo driver)
{
	if (driver.HasRecommendation)
		return true;
	else
	    return (driver.Age > 21 && driver.HasDriverLicense);
}
void PrintResult(stDriverInfo driver )
{
	if (IsAccepted(driver))
	{ 
		cout<<"Hired"<<endl;
	}
	else
	{
		cout<<"Rejected"<<endl;
	}
}
int main()
{
	PrintResult(ReadDriverInfo());
	return 0;
}
