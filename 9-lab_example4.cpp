#include <iostream> 
#include <set> 
#include <iterator> 
  
using namespace std; 
  
int main() 
{ 
    set <int, greater <int> > s1;         
  
    s1.insert(40); 
    s1.insert(30); 
    s1.insert(60); 
    s1.insert(20); 
    s1.insert(50); 
    s1.insert(50); 
    s1.insert(10); 
  
    set <int, greater <int> > :: iterator itr; 
    cout << "\ns1 : "; 
    for (itr = s1.begin(); itr != s1.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
    cout << endl; 
  
    set <int> s2(s1.begin(), s1.end()); 
  
    cout << "\ns2  : "; 
    for (itr = s2.begin(); itr != s2.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
    cout << endl; 
  
    cout << "\n30 dan kichik elementlar o`chirilgandan keyingi holat : "; 
    s2.erase(s2.begin(), s2.find(30)); 
    for (itr = s2.begin(); itr != s2.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
  
    int num; 
    num = s2.erase (50); 
    cout << "\ns2dan 50 ga teng elementni o`chirish  : "; 
    cout << num << " element o`chirildi \t" ; 
    for (itr = s2.begin(); itr != s2.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
  
    cout << endl; 
  
    return 0; 
  
}