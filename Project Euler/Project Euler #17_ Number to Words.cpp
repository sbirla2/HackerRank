#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stdexcept>

const std::vector<std::string> first14 = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen" };
const std::vector<std::string> prefixes = {"Twen", "Thir", "For", "Fif", "Six", "Seven", "Eigh", "Nine"};

std::string inttostr( const unsigned int number )
{
    if( number <= 14 )
        return first14.at(number);
    if( number < 20 )
        return prefixes.at(number-12) + "teen";
    if( number < 100 ) {
        unsigned int remainder = number - (static_cast<int>(number/10)*10);
        return prefixes.at(number/10-2) + (0 != remainder ? "ty " + inttostr(remainder) : "ty");
    }
    if( number < 1000 ) {
        unsigned int remainder = number - (static_cast<int>(number/100)*100);
        return first14.at(number/100) + (0 != remainder ? " Hundred " + inttostr(remainder) : " Hundred");
    }
    if( number < 1000000 ) {
        unsigned int thousands = static_cast<int>(number/1000);
        unsigned int remainder = number - (thousands*1000);
        return inttostr(thousands) + (0 != remainder ? " Thousand " + inttostr(remainder) : " Thousand");
    }
    if( number < 1000000000 ) {
        unsigned int millions = static_cast<int>(number/1000000);
        unsigned int remainder = number - (millions*1000000);
        return inttostr(millions) + (0 != remainder ? " Million " + inttostr(remainder) : " Million");
    }
    throw std::out_of_range("inttostr() value too large");
}

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
    long long unsigned int n;
    std::cin>>n;
    std::cout<<inttostr(n)<<std::endl;
    }
    return 0;
}
