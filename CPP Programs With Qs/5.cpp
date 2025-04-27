#include<iostream>
#include<cmath>
using namespace std;
int main()
{ int a,n;
  cout<<"enter a number";
  cin>>n;

  if(n<=1)
     { 
        cout<<"Not prime";
     return 0;
     }

for(int i=2;i<=sqrt(n);i++)
{
  if(n%i==0)
  {
    cout<<"Not prime\t";
  return 0;
  }
}
cout<<"Prime";
return 0;
}