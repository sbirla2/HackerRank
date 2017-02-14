#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int numberofGames;
   std::cin >> numberofGames;
   while (numberofGames--) {
    int stlen;
    std::cin >> stlen;
    std::string ladyBugs;
    std::cin >> ladyBugs;
    int unhappyBugs=0,Spaces=0;
    for (size_t i = 1; i < stlen; i++) {
      if (ladyBugs[i]=='_') {
        Spaces++;
      }
      else if((ladyBugs[i]!=ladyBugs[i-1] || ladyBugs[i]!=ladyBugs[i+1])){
        unhappyBugs++;
      }
    }
    if (Spaces==unhappyBugs) {
      std::cout << "YES" << '\n';
    }
    else{
      std::cout << "NO" << '\n';
    }
   }
    return 0;
}
