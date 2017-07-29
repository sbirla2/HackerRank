#include <vector>
#include <exception>
#include <string>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int numberOfElements,queries,tempSum=0;
   std::cin >> numberOfElements>>queries;

   std::string monkElements;
   std::getline(std::cin,monkElements);

   std::vector<unsigned long int>elementsSum;
   for (size_t i = 0; i < monkElements.size()-1; i++) {
     if (monkElements[i]==' ') {
        elementsSum.push_back(tempSum);
        tempSum=0;
     }
     else{
      try {
      std::string punt(1,monkElements[i]);
      tempSum+=std::stol(punt);

    }
    catch(const std::invalid_argument& e)
    {
      std::throw(e.what());
    }
    catch(const std::out_of_range& e)
    {
     std::throw(e.what());
    }
     }
   }

   std::sort(elementsSum.begin(),elementsSum.end());

   while (queries--) {
    long int firstQuery,secondQuery;
    std::cin >> firstQuery>>secondQuery;
    if (firstQuery==1) {
      long int lastOfElementSum=elementsSum.size()-1,maximalSum=0;
      while (secondQuery--) {
        maximalSum+=elementsSum[lastOfElementSum];
        lastOfElementSum--;
      }
      std::cout << maximalSum << '\n';
    }
    else if( firstQuery == 2 ){
      long int firstOfElementSum= 0,minimalSum=0;
      while (secondQuery--) {
        minimalSum+=elementsSum[firstOfElementSum];
        firstOfElementSum++;
      }
      std::cout << minimalSum << '\n';
    }
   }
    return 0;
}
