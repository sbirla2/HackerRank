#include <iostream>

using namespace std;
int main()
{
int testcases;
cin >>testcases;
for (int k = 0; k < testcases; k++)
{
    long Number_of_Prisioners, Sweets, StartID, Poision_sweet;
    cin >> Number_of_Prisioners >> Sweets >> StartID;

    long H = Sweets%Number_of_Prisioners;
    if (H == 0) {H = Number_of_Prisioners;}
    if ((StartID-1) + H > Number_of_Prisioners) {Poision_sweet = (StartID-1) -(Number_of_Prisioners-H);}
    else {Poision_sweet = (StartID-1) +H;}

    printf("%ld\n", Poision_sweet);
}

	return 0;
}
