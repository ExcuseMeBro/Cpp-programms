/*11.Talabalar familiyalarini alifbo tartibida.*/
#include <bits/stdc++.h>
using namespace std;

void print(vector<string> names){
	printf(".............................\n");
	for(int i=0;i<names.size();i++)
		cout<<names[i]<<endl;
	printf("\n");
}

bool mycomp(string a, string b){

	return a<b;
}

vector<string> Saralayman(vector<string> a){
	int n=a.size();

	sort(a.begin(),a.end(),mycomp);
	return a;
}

int main()
{   
	int n;
	printf("Talabalr sonini kiriting: ");
	scanf("%d",&n);

	vector<string> names;
	string name;
	printf("Talabalarning F.I.SH larini kiriting: \n");
	for(int i=0;i<n;i++){
		cin>>name;
		names.push_back(name); 
	}

	names=Saralayman(names);

	printf("SARALANDI!\n");
	print(names);

	return 0;
}