#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string LexographicallyMinimum(string s1,string s2){
    string resultantString;int i=0,j=0;
    while(i <= int(s1.size())) {
       //Base Cases follow
       if (s1.size()==0) {
         sort(s2.begin(),s2.end());
         return s2;
       }
       if (s2.size()==0) {
         sort(s1.begin(),s1.end());
         return s1;
       }
       if(i==s1.size()){  //Append the sorted rest when the first string terminates
         sort(s2.begin(),s2.end());
         resultantString.append(s2,j,s2.size());
         return resultantString;
       }
       if(j==s2.size()){  //Append the sorted rest when the second string terminates
         sort(s1.begin(),s1.end());
         resultantString.append(s1,i,s1.size());
         return resultantString;
       }
         if(s1[i] < s2[j] || s1[i]==s2[j]){
           resultantString.push_back(s1[i]);
           i++;
         }
         else{
           resultantString.push_back(s2[j]);
           j++;
         }
    }
    return resultantString;
}
int main() {
    int t;
    std::cin >> t;
    while (t--) {
      string s1,s2;
      std::cin >> s1;
      std::cin >> s2;
      std::cout <<LexographicallyMinimum(s1,s2)<< '\n';
    }
    return 0;
}
