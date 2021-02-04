#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence = "Helhlho Wowrldw";

    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == sentence[0])
        {
            sentence[i] = '.';
        }
    }
    std::cout << sentence;

    return 0;
}