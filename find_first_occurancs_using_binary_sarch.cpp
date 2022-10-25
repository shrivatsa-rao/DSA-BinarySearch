//This is c++ program to find th first occurances in the array using binary search.
#include <iostream>

using namespace std;
int bin(int a[],int n,int tar)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        int g=a[mid];
        if(g==tar)
        {
            ans=mid;
            e=mid-1;
        }
        else

        if(tar<g)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}

int main()
{
    int a[]={3,4,5,5,5,5,8,12};
    int tar=5;
    int n=sizeof(a)/sizeof(a[0]);
    int k=bin(a,n,tar);
    cout<<k<<endl;
    return 0;
}
