#include <bits/stdc++.h> 
using namespace std; 

float Kvadratpiramida(int b, int h) 
{ 
    float vol = (0.33) * b *  
                     b * h; 
    return vol; 
} 
  

int main() 
{ 
    int b = 4, h = 9; 
    
    cout << "Asosi kvadrat bo`lgan "
         << " Piramida "
         << Kvadratpiramida(b, h) 
         << endl; 
    return 0; 
}