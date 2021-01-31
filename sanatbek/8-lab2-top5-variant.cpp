#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    string s;

    getline( cin, s );

    string::size_type max_size;
    string max_word;
    string word;

    istringstream is( s );
    max_size = 0;
    while ( is >> word )
    {
        if ( max_size < word.size() ) 
        { 
            max_size = word.size();
            max_word = word;
        }           
        else if ( max_size == word.size() ) 
        { 
            max_word += "; ";
            max_word += word;
        }            
    }

    cout << max_size << ' ' << max_word << endl;
        
}    