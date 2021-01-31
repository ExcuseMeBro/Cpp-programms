//7.Ro‟yhat har ikkinchi elementi o‟chirilsin.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> num_list;
    num_list.push_back(10);
    num_list.push_back(2);
    num_list.push_back(30);
    num_list.push_back(4);
    num_list.push_back(50);
    num_list.push_back(500);
    for (auto element = next(num_list.begin(), 1); element != num_list.end();) {
        element = num_list.erase(element);
        if (element != num_list.end())
            ++element;
    }
    for (auto element = num_list.begin(); element != num_list.end(); ++element) {
        cout << *element << " ";
    }
    cout << endl;
    return 0;
}