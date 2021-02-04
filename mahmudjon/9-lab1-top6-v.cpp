#include <bits/stdc++.h> 
using namespace std; 
void blank_line(const char *file_name)
{   
  ifstream input(file_name);    
  
  ofstream output;                
  output.open("natija.txt", ios::out);
  string str;
  string str1;
  cout<<"S satrni kiriting: ";
  getline(cin,str1);
  while(getline(input,str))
  { 
    while (str.length()==0 ) 
       getline(input,str);   
  
    output<<str+"\n"+str1<<endl;
  }
  output.close();  
  input.close();
}
int main()
{
  blank_line("text.txt");
  return 0;
}