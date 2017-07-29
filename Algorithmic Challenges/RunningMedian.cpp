#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
  long int number_of_elements;
  std::cin >> number_of_elements;


  std::vector<long int> median_Vector;

  for (size_t i = 0; i < number_of_elements ; i++) {
    long int current_element;
    float mval;
    std::cin >> current_element;

    median_Vector.push_back(current_element); // Store all elements in a vector

    sort(median_Vector.begin(),median_Vector.end());

    if (median_Vector.size()%2 == 0) { // Even Index
      mval = (float)(median_Vector[median_Vector.size()/2]+median_Vector[median_Vector.size()/2-1])/2;
      printf("%.1f\n",mval );
    }
    else{   // odd Index
      mval = (float)median_Vector[median_Vector.size()/2];
      printf("%.1f\n",mval );
    }
  }
    return 0;
}
