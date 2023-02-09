/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//this is c++ program for finding the median of two sorted arrays using binary search.

#include <bits/stdc++.h>

using namespace std;
double merge(int a[],int b[],int n1,int n2)
{
    int l=0;
    int h=n1;
    int c1,c2;
    
    int l1,l2,r1,r2;
    while(l<=h)
    {
        c1=(l+h)/2;
        c2=((n1+n2+1)/2)-c1;
        l1=(c1==0)?-1:a[c1-1];
        l2=(c2==0)?-1:b[c2-1];
        
        r1=(c1==n1)?100:a[c1];
        r2=(c2==n2)?100:b[c2];
        
        
        if(l1<=r2 && l2<=r1)
        {
            if((n1+n2)%2==0)
            {
                return (max(l1,l2)+min(r1,r2))/2.0;
                
            }
            else
            {
                return max(l1,l2);
            }
        }
        else
        if(l1>r2)
        {
            h=c1-1;
        }
        else
        {
            l=c1+1;
        }
        
        
        
    }
    
    return 0.0;
}

int main()
{
    int a[]={2, 3, 5, 8};
    int b[]={10, 12, 14, 16, 18, 20};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
   double k= merge(a,b,n1,n2);
   cout<<k;
    
    return 0;
}
