//1.Navbatda birinchi va oxirgi elementlar o’rni almashtirilsin
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> myqueue;
    myqueue.push(3);
    myqueue.push(4);
    myqueue.push(1);
    myqueue.push(7);
    myqueue.push(8);
    myqueue.push(0);

    // cout << myqueue.front() << endl;
    // cout << myqueue.back() << endl;
    swap(myqueue.front(), myqueue.back());

    while (!myqueue.empty())
    {
        cout << ' ' << myqueue.front();
        myqueue.pop();
    }
    cout << endl;
    return 0;
}
