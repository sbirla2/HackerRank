#include <map>
#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Global Dictionary and SumList
std::map<char, int>alphaDictMap;
std::vector<long int> weightSum;

void createDict(){
char alpha = 'a';
for (size_t i = 1; i <=26; i++) {
alphaDictMap[alpha]=i;
alpha++;
}
}

void genSumList(std::string weighted_string){
  char prevChar = '0';
  long int prevSum = 0;

  for (size_t i = 0; i < weighted_string.size(); i++) {
    if (prevChar == weighted_string[i]){
      prevSum+=alphaDictMap[weighted_string[i]];
    }
    else{
      prevSum=alphaDictMap[weighted_string[i]];
    }
    prevChar = weighted_string[i];
    weightSum.push_back(prevSum);
  }
}

int main() {
    createDict();

    std::string weighted_string;
    long int number_of_ops;

    std::cin >> weighted_string;
    std::cin >> number_of_ops;

    genSumList(weighted_string);

    for (size_t i = 0; i < number_of_ops; i++) {
      long int value;
      std::cin >> value;
      if( find(weightSum.begin(),weightSum.end(),value) != weightSum.end() ){
        std::cout << "Yes" << '\n';
      }
      else{
        std::cout << "No" << '\n';
      }

    }
    return 0;
}
