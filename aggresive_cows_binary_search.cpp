/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//this is aggressive cows problem using binary search.


#include <bits/stdc++.h>

using namespace std;
bool posb(int a[],int c,int mid,int n)
{
    int ct=1;
    int k=a[0];//intilaize the first elemtnt to k then you can subtract k with next element.this is the
    //position of the first cow.
    for(int i=0;i<n;i++)
    {
        if(a[i]-k>=mid)//subtact k with next element then we need maximum space between two cows so using greater 
        {               //then equal to.we need to see the distance between two cows is greater.
            ct++;
            if(ct==c)
            {
                return true;
            }
           k=a[i]; //if we have more cows then we need to change the position of first cow.
        }
    }
    return false;
}

int dist(int a[],int c,int n)
{
    int s=0,maxi=-1,ans=-1;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,a[i]);//here we are not taking sum but here we are taking the maximum of the array.
        //becauz we need maximum distance between the cows.
    }
    int e=maxi;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(posb(a,c,mid,n))
        {   
            ans=mid;
            s=mid+1;//here we are if it a possible solution then do s=mid+1 becuse we need to see maximum disance
        } //find maximun is possible only possible by moving forward.
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int n = 5, c = 2;
    int a[]={4,2,1,3,6};
    sort(a,a+n);
    int k=dist(a,c,n);
    cout<<"the distance between cows is "<<k<<endl;
    return 0;
}
