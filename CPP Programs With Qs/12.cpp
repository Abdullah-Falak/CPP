#include<iostream>
#include<cmath>
using namespace std;
 main()
{ 
   int n,a=0,b=1,next,i;
   cout<<"Enter No.";
   cin>>n;

   
        for(i=1;i<=n;i++)
        {
            next=a+b;
            if(next==n)
               { cout<<"Fibonacci";
               return 0;}
               a=b;
               b=next;
        }
        cout<<"not fibonacci";
    
      
}