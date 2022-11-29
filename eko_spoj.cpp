/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//eko spoj problem using binary search.


#include <bits/stdc++.h>

using namespace std;

bool posb(int a[],int n,int p,int mid)
{   
    int sum=0;
    for(int i=0;i<n;i++)
    {
       int diff=0;
        if(a[i]>mid)//check size of blade that is mid is less then array element then only do subtract and store
        {           //the problem otherwise it is zero.
            diff=a[i]-mid;
        }
        sum=sum+diff;
    }
    
    if(sum>=p)//check target is greater than equal to sum.
    {
        return true;
    }
    else
    {
        return false;
    }
}

int treecut(int a[],int n,int p)
{
    sort(a,a+n);//sorting is done so that we can easily get the last element. After sorting last element will be the 
    int s=0,ans=-1;//highsest height eleement will be present after sorting.
    int e=a[n-1];//assign that element to e
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(posb(a,n,p,mid))
        {
            ans=mid;
            s=mid+1;//do s=mid+1 becauz suppose target=45 then if we get sum=50 then again go up and do s=mid+1 then u get sum=46
        }//then also no problem hence for possible solution it is better to do s=mid+1;
        else
        {
            e=mid-1;//when target=50 but u have cut up and u got sum=35 it does not satisfy u come down now u got 55
        }//so come down it e=mid-1.
        mid=s+(e-s)/2;
    }
    
    return ans;
}

int main()
{
   int a[]={4,42,40,26,46};
   int n=sizeof(a)/sizeof(a[0]);
   int p=20;
   int k=treecut(a,n,p);
   cout<<"the height of blade is required is"<<k<<endl;

    return 0;
}
