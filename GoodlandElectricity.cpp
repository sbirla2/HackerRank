#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
  long int n,k,Zeros=0;
  std::cin >> n>>k;

  std::vector<long int>GoodLandCountry;
  for (size_t i = 0; i < n; i++) {
    long int value;
    std::cin >> value;
    if (value==0) {
      Zeros++;
    }
    GoodLandCountry.push_back(value);
  }
  long int Switchon=0;
  if (Zeros==n || k==0) {
    std::cout << "-1" << '\n';  //No City has light towers
  }
  else{
        bool flag=true;
        for (size_t i = k; i < GoodLandCountry.size(); i+=k) {
          if (GoodLandCountry[i]!=1) {
            std::cout << "-1" << '\n';
            flag=false;
            break;
          }
          Switchon++;
        }
      if(flag){ std::cout << Switchon << '\n';}
  }
  return 0;
}
