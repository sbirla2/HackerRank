#include <iostream>
#include <string>
#include <locale>

using namespace std;

char get_cipher_alphabet(char alpha,int key_size){
  // Rotates the key and gets the correct alphabet
  if (std::islower((int)alpha)) {
    int alpha_value = alpha + (key_size % 26);
    int cipher_value;
    if (alpha_value > 122) {
      cipher_value = (alpha_value % 122) + 97 -1;
    }

    else{
      cipher_value = alpha_value;
    }
    return (char)cipher_value;
  }
  else{
    int alpha_value = alpha + (key_size % 26);
    int cipher_value;
    if (alpha_value > 90) {
      cipher_value = (alpha_value % 90) + 65 -1;
    }
    else{
      cipher_value = alpha_value;
    }
    return (char)cipher_value;
  }
  }

int main() {

    std:: locale loc; // Locale Type for isalpha comparison
    int msg_size;
    std::cin >> msg_size;

    std::string plain_text;
    std::cin >> plain_text;

    int rotation_key;
    std::cin >> rotation_key;

for (size_t i = 0; i < plain_text.size(); i++) {
  if (std::isalpha(plain_text[i],loc)) {
    plain_text[i] = get_cipher_alphabet(plain_text[i],rotation_key);
  }
}
std::cout << plain_text << '\n';
    return 0;
}
