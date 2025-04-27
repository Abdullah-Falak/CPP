#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
int n=0,t=1;

while(t!=-40)
{
  cout<<t<<"\t";
  n++;
  if(n%2==0)
    t=3*n+1;
    
  else
    t=-(3*n+1);
}
cout<<t<<endl;
return 0;

}