#include <iostream>
using namespace std;

int main() {
	int GivenDay,GivenMonth,GivenYear,LastDate,LastMonth,LastYear,fine=0;
	std::cin >> GivenDay>>GivenMonth>>GivenYear;
	std::cin >> LastDate>>LastMonth>>LastYear;
	if(GivenYear>LastYear)
	{
	    fine=10000; //After an Year
	}
	if(GivenMonth>LastMonth && GivenYear==LastYear)
	{
	    fine=500*(GivenMonth-LastMonth); //Within Year
	}
	if(GivenDay > LastDate && GivenMonth==LastMonth && GivenYear==LastYear)
	{
	    fine=15*(GivenDay-LastDate); //Within Month
	}
	if(GivenDay <= LastDate && GivenMonth==LastMonth && GivenYear==LastYear)
	{
	    fine=0;//On time or before the time.
	}
	std::cout << fine << std::endl;
	return 0;
}
