#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "Caesar's cipher cracker" << endl << endl;
    cout << "Enter encrypted text: " << endl;
    string encrypted_text;
    getline(cin, encrypted_text);

    //decrypting
    char * decrypted_variation = new char [encrypted_text.length()];
    for(int step = 0; step < 26; step++){
        for(int sign = 0; sign < encrypted_text.length(); sign++){
            char sign_ascii = int(encrypted_text[sign]);
            if((sign_ascii > 64) and (sign_ascii < 91)){
                if((sign_ascii + step)>=91){
                    sign_ascii = sign_ascii + step - 26;
                    decrypted_variation[sign] = sign_ascii;
                }else{
                    sign_ascii = sign_ascii + step;
                    decrypted_variation[sign] = sign_ascii;
                }
            }else if((sign_ascii > 96) and (sign_ascii < 123)){
                if((sign_ascii + step)>=123){
                    sign_ascii = sign_ascii + step - 26;
                    decrypted_variation[sign] = sign_ascii;
                }else{
                    sign_ascii = sign_ascii + step;
                    decrypted_variation[sign] = sign_ascii;
                }
            }else{
                decrypted_variation[sign] = sign_ascii;
            }
        }
        cout << "|step " << step << " |  " << decrypted_variation << endl << endl;
    }
    delete [] decrypted_variation;
    return 0;
}
