﻿#include <iostream>
using namespace std;

void FindDivirsos(int n)
{
	for(int i=1;i<=n; i++)
	{
		if (n % i== 0) 
		{
			cout << i << " ";
	
		}
	}
	cout << endl;
}


int main()
{
	FindDivirsos(34);
	return 0;
}


