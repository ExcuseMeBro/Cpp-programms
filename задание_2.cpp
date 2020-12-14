#include <bits/stdc++.h>
using namespace std;

char szTable[17] =
{
	0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, //0-9
	0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47 //A-G

};

void convertTo( int nSystem, double a )
{
	
	double c;
	double d;
	string strCC = "";
	
	d = modf(a, &c); 
	if (fabs(c) < nSystem)
	{ 
		strCC = szTable[abs((int)c)];
	}
	else
	{
		while (c > 0) 
		{
			double  ost = std::modf(c / (double)nSystem, &c); 
			strCC.insert( strCC.begin(), szTable[ (int) (ost * 10 ) ] );
			
		}
	}
	if (d != 0)
	{
		strCC += ".";
		for (int i = 5; i > 0; --i)
		{
			double x;
			d = std::modf(d * (double)nSystem, &x);
			strCC += szTable[ (int)x ];

		}

	}
	cout << "Number in " << nSystem << "CC=" << strCC.c_str() << endl;

	
}

int main()
{
	double a;
	cout << "Input number = ";
	cin >> a;

	convertTo(2, a);
	convertTo(6, a);

	return 0;
}
