//This is the c++ program to find th last occurances using binary search.


#include <iostream>

using namespace std;


void bin(int a[],int n,int tar)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        int k=a[mid];
        if(k==tar)
        {
            ans=mid;
            s=mid+1;
        }
        else if(tar>a[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }

        mid=s+(e-s)/2;
    }

    cout<<ans;
}

int main()
{
    int a[]={1,2,2,3,4,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int tar=2;
    bin(a,n,tar);
    return 0;
}
