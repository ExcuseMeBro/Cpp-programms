#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence = "Hello World";
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