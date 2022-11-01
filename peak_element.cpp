//This is c++ program to find the peak element in the array.

#include <iostream>

using namespace std;

int peak(int a[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(a[mid]<a[mid+1])//here this is for first line if peak elemnt is on right side them u need move forward so
        {                   //for that condition is mid+1
            s=mid+1;
        }
        else
        {
            e=mid;  //else peak elemt might be the mid elemnt or it might be in the same line so we should use only e=mid
        }           //not mid-1;
        mid=s+(e-s)/2;
    }
    return s;
}

int main()
{
    int a[]={0,10,5,2};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"the peak element is"<<peak(a,n);
    return 0;
}
