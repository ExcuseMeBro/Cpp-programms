//17.Berilgan matnli fayldagi satrlar sonini aniqlang.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int satr = 0;
    string line;
    ifstream file("4-lab.cpp");
    while (getline(file, line))
        satr++;

    cout << "Berilgan faylda " << satr << " satr bor!" << endl;
    return 0;
}
