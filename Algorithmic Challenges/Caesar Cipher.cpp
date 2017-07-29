#include <iostream>

using namespace std;

int main() {
	int Key;
    char c;
    string Str;

    cin >> Key;

    cin >> Str;

    cin >> Key;

    for(auto &m: Str) //Changes Each Character read in the String one by one
    {
        if(isalpha(m)) //Checks if the Number is an Alphabet
        {
            c = isupper(m)?'A':'a'; //Checks for Upper Case Alphabets
            m= c + (m - c + Key)%26;
        }
  }
    cout << Str << endl;
	return 0;
}
