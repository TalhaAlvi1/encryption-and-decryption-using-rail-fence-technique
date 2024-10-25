#include <iostream>
#include <string>
using namespace std;

int main() {
    string plain_text = "MEETMEAFTERTHEPARTY";
    int num_rails = 2; 
    int length = plain_text.length();
    
    string rail1 = "", rail2 = "";
    int row = 0;
    int direction = 1;                                                 // 1 for moving down, -1 for moving up
    
    for (int i = 0; i < length; i++) {
        if (row == 0) {
            rail1 += plain_text[i];
        } else {
            rail2 += plain_text[i];
        }
        if (row == 0) {
            direction = 1;
        } else if (row == num_rails - 1) {
            direction = -1;
        }
        row += direction; 
    }
    string cipher_text = rail1 + rail2;
    cout << "Cipher Text: " << cipher_text << endl;
return 0;
}