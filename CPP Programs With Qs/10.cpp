#include<iostream>

using namespace std;

main()
{
	int i,n,j,k;
	cout<<"Prime Numbers from 1 to 300"<<endl;
	for(n=2;n<=300;n++)
	{
		
		for(i=2;i*i<=n;i++)
		{
			if(n%i==0)
			goto not_prime;
		}
		cout<<n<<"   ";
	not_prime:;	
	}
}