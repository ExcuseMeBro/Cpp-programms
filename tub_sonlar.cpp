#include <iostream>
using namespace std;

int main() {
    int x, y, i;
    bool tubson = true;

    cout << "Oraliqni (masalan: 1 9) ko`rinishida kiriting: ";
    cin >> x >> y;

    cout << "\n[" << x << ", " << y << "] oraliqdagi tub sonlar:" << endl;

    while (x < y) {
        tubson = true;
        if (x == 0 || x == 1) {
            tubson = false;
        }
        else {
            for (i = 2; i <= x / 2; ++i) {
                if (x % i == 0) {
                    tubson = false;
                    break;
                }
            }
        }
        
        if (tubson)
            cout << x << " ";

        ++x;
    }

    return 0;
}