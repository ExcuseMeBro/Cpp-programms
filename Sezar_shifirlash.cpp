#include<bits/stdc++.h>
using namespace std;
int main()
{
	char satr[100], ch;
	int i, key;
	
	printf("Ism va familiyangizni kiriting: ");
	cin >> satr;
	printf("Kalitni kiriting: ");
	scanf("%d", &key);
	
	for(i = 0; satr[i] != '\0'; ++i){
		ch = satr[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			satr[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			satr[i] = ch;
		}
	}
	
	printf("Shifirlangan ma`lumot: %s", satr);
	cout<<endl;
	return 0;
}