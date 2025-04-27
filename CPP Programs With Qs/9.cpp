#include<iostream>
#include<cmath>
using namespace std;
 main()
{ 
    double t=0,sum=0,
   int i,n=1,f=1;
    for(int i=1;i<=5;i++)
      {
         t=n/(double)f;
         
         f*=(n+1);
         sum+=t;
         n++;
      } 
         cout<<"sum of no. is"<<sum<<endl;
      
}