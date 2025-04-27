#include<iostream>
#include<cmath>
using namespace std;
 main()
{ int a,n,sum=0;
    for(int i=1;i<=5;i++)
      {   sum+=i;
         for(int j=1;j<=i;j++)
         {
            cout<<j;
            if(j<i)
            {
                cout<<"+";
            }
         }
         cout<<"="<<sum<<endl;
      }
}