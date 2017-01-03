#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <iostream>
using namespace std;

class Contacts{
private:
  std::vector<string>contactList;
  int querySize,partialCount;
public:
  void processContacts(){
    std::cin >> querySize;
    for (size_t i = 0; i < querySize; i++) {
      string opName,inputString;
      partialCount=0;
      std::cin >> opName>>inputString;
      if (opName=="add") {
        addContacts(inputString);
      }
      else if(opName=="find"){
        std::cout << findPartial(inputString) << '\n';
      }
    }
  }
  void addContacts(string inputString){
    contactList.push_back(inputString);
  }
  int findPartial(string inputString){
    for (std::vector<string>::iterator it=contactList.begin();it!=contactList.end();++it) {
      if ((*it).find(inputString)!=std::string::npos) {
        partialCount++;
      }
    }
    return partialCount;
  }
};
int main() {
    Contacts ContObj;
    ContObj.processContacts();
   return 0;
}
