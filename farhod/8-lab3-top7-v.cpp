#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence = "O`zbekiston yoshlari bunyodkoridir!";
    int length;
    string temp = "";

    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] != ' ')
        {
            temp += sentence[i];
        }
        if (sentence[i] == ' ')
        {
            cout << temp + '.' + " ";
            temp = "";
        }
    }
    std::cout << temp;

    return 0;
}