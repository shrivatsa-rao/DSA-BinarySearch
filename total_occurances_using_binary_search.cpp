//total number of occurances of a element using binary search.
#include <iostream>

using namespace std;

int  biny(int a[],int n,int tar)
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

    return ans;
}



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
    int a[]={3,4,5,5,5,6,7};
    int tar=5;
    int n=sizeof(a)/sizeof(a[0]);
    int k=bin(a,n,tar);
    int r=biny(a,n,tar);
    cout<<"The first occurance of the element in array is "<<k<<endl;
    cout<<"The last occurance of the element in array is "<<r<<endl;
    cout<<"total occurance of the element is "<<r-k+1<<endl;
    return 0;
}
