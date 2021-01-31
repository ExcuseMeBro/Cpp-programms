#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 
  
//function for printing the elements in a list 
void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 
  
int main() 
{ 
  
    list <int> list1, list2; 
  
  
    for (int i = 0; i < 10; ++i) 
    { 
        list1.push_back(i * 2); 
        list2.push_front(i * 3); 
    } 
    cout << "\nList 1 ning elementlari : "; 
    showlist(list1); 
  
    cout << "\nList 2 ning elementlari : "; 
    showlist(list2); 
  
    cout << "\nlist 1 ning 1-elementi : " << list1.front(); 
    cout << "\nlist 1 ning oxirgi elementi : " << list1.back(); 
  
    cout << "\nlist 1 pop_front() xossasi : "; 
    list1.pop_front(); 
    showlist(list1); 
  
    cout << "\nlist 2 pop_back() xossasi: "; 
    list2.pop_back(); 
    showlist(list2); 
  
    cout << "\nlist 1 reverse() xossasi: "; 
    list1.reverse(); 
    showlist(list1); 
  
    cout << "\nlist 2 sort() xossasi: "; 
    list2.sort(); 
    showlist(list2); 
  
    return 0; 
  
} 