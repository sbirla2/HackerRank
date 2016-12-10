#include <vector>
#include <iostream>
#include <unordered_map>
#include <utility>

using namespace std;

int main(int argc, char const *argv[]) {
long int n,q;
std::cin >>n>>q;
std::unordered_map<long int,std::vector<long int>>vmap; //map of vectors and their assosiated indices
for(long int i=0;i<n;i++){
    std::vector<long int>v;//Vector to be pushed in the map
    long int vn;
    std::cin >>vn; //Size of the vector
    for(long int j=0;j<vn;j++){     //Vector Input
        long int value;
        std::cin >> value;
        v.push_back(value);
    }
    vmap.insert(make_pair(i,v));//Store Vector and assosiated index in the map
}
for(long int i=0;i<q;i++){  //Display output for appropriate query
  long int a,b;
  std::cin>>a>>b;
  std::unordered_map<long int,std::vector<long int>>::const_iterator pos = vmap.find (a);
  std::cout<<"\n"<<pos->second[b];
}
  return 0;
}
