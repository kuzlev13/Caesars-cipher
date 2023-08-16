#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "Caesar's cipher encryptor" << endl << endl;
    cout << "Enter text: " << endl;
    string text;
    getline(cin, text);
    cout << endl << "Enter step: " << endl;
    int step;
    cin >> step;

    //encrypting
    char * encrypted_variation = new char [text.length()];
    for(int sign = 0; sign < text.length(); sign++){
        char sign_ascii = int(text[sign]);
        if((sign_ascii > 64) and (sign_ascii < 91)){
            if((sign_ascii + step)>=91){
                sign_ascii = sign_ascii + step - 26;
                encrypted_variation[sign] = sign_ascii;
            }else{
                sign_ascii = sign_ascii + step;
                encrypted_variation[sign] = sign_ascii;
            }
        }else if((sign_ascii > 96) and (sign_ascii < 123)){
            if((sign_ascii + step)>=123){
                sign_ascii = sign_ascii + step - 26;
                encrypted_variation[sign] = sign_ascii;
            }else{
                sign_ascii = sign_ascii + step;
                encrypted_variation[sign] = sign_ascii;
            }
        }else{
            encrypted_variation[sign] = sign_ascii;
        }
    }
    cout << "|step " << step << " |  " << encrypted_variation << endl << endl;
    delete [] encrypted_variation;
    return 0;
}
