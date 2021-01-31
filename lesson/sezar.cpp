#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tanla;
    cout << "1. Shifirlash" << endl << "2. Deshifrlash" << endl << "Tanlovingiz(1,2): ";
    cin >> tanla;
    cin.ignore();

    if (tanla == 1){
        string msg;
        cout << "Faqat harflardan foydalaning!" << endl;
        cout << "Satr kiriting: ";
        getline(cin, msg);

        int key;
        cout << "Kalit kiriting(0-25): ";
        cin >> key;
        cin.ignore();

        string encryptedText = msg;

        for (int i = 0; i < msg.size(); i ++){

            if(msg[i]==32){
                continue; 
            } else {

                if((msg[i]+key) > 122) {
                    int temp = (msg[i] + key) - 122;
                    encryptedText[i] = 96 + temp;
                } else if (msg[i] + key > 90 && msg[i] <= 96){
                    int temp = (msg[i] + key) - 90;
                    encryptedText[i] = 64 + temp;
                } else {
                    encryptedText[i] += key;
                }

            } 
        } 

        cout << "Shifrlangan satr: " << encryptedText<<endl;

    } else if (tanla == 2){
        string encpMsg;
        cout << "Faqat harflardan foydalaning!" << endl;
        cout << "Shifrlangan satr kiriting: ";
        getline(cin, encpMsg);

        int dcyptKey;
        cout << "Kalitni kiriting(0-25): ";
        cin >> dcyptKey;
        cin.ignore();

        string decryptedText = encpMsg;

        for (int i = 0; i < encpMsg.size(); i++){
            if(encpMsg[i]==32){
                continue; 
            } else {
                if((encpMsg[i] - dcyptKey) < 97 && (encpMsg[i] - dcyptKey) > 90){
                    int temp = (encpMsg[i] - dcyptKey) + 26;
                    decryptedText[i] = temp;
                } else if((encpMsg[i] - dcyptKey) < 65){
                    int temp = (encpMsg[i] - dcyptKey) + 26;
                    decryptedText[i] = temp;
                } else {
                    decryptedText[i] = encpMsg[i] - dcyptKey;
                }
            }
        }

        cout << "Deshifrlangan satr: " << decryptedText << endl;

    } else {
        cout << "Tanlovingiz xato!"<<endl;
    }
    return 0;
}