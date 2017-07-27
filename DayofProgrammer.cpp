#include <iostream>
using namespace std;


int main() {
    long int year;
    std::cin >> year;
    if (year%4==0 && year%100!=0) {
      // if Day is in Leap year its 12
      std::cout << "12.09." <<year<<'\n';
    }
    else{
      std::cout << "13.09." <<year<<'\n';
    }
    return 0;
}
