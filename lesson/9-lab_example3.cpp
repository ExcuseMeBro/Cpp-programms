#include <iostream> 
#include <deque> 
  
using namespace std; 
  
void showdq(deque <int> g) 
{ 
    deque <int> :: iterator it; 
    for (it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 
  
int main() 
{ 
    deque <int> gquiz; 
    gquiz.push_back(10); 
    gquiz.push_front(20); 
    gquiz.push_back(30); 
    gquiz.push_front(15); 
    cout << "gquiz elementlari : "; 
    showdq(gquiz); 
  
    cout << "\ngquizning o`lchami : " << gquiz.size(); 
    cout << "\ngquizning maximal o`lchami : " << gquiz.max_size(); 
  
    cout << "\ngquizning 2-indexli elementi : " << gquiz.at(2); 
    cout << "\ngquizning dastlabki elementi : " << gquiz.front(); 
    cout << "\ngquizning oxirgi elementi : " << gquiz.back(); 
  
    cout << "\ngquiz.pop_front() : "; 
    gquiz.pop_front(); 
    showdq(gquiz); 
  
    cout << "\ngquiz.pop_back() : "; 
    gquiz.pop_back(); 
    showdq(gquiz); 
  
    return 0; 
} 