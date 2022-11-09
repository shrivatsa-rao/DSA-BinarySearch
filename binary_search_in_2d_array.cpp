/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Search  element in 2d array using binary search.
#include <iostream>

using namespace std;


bool bin(int a[][4],int r,int m,int n,int t)
{
    int s=0;
    int e=n-1;//n is for column so now we are putting binary search for column.
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(t==a[r][mid])
        {
            cout<<r<<" "<<mid<<endl;
            return true;
        }
        
        if(t<a[r][mid])//if the target is lesser than present element then find in the left.
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return false;
}


bool sea(int a[][4],int m,int n,int t) //this is a function which helps in find the row so that we can decide in which row element
{               //is present .so intialize the m is for row. intialize s=0 and e=m-1 and then perform binary search related operation.
    int s=0;
    int e=m-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid][0]==t)//in a row which has mid element and in that row if the lement is present first itself then print the position.
        {
            cout<<mid<<" "<<0<<endl;
            return true;
        }
        else
        if(a[mid][n-1]==t)//in a row where mid element is present if the element is last element then print it.
        {
            cout<<mid<<" "<<n-1<<endl;
            return true;
        }
        else
        if(t>a[mid][0] && t<a[mid][n-1])//if the element is greater than first and smaller than last then do serach becuz in middle 
        {                               //there mighty be many elements. so do search ooperation.
            int k=bin(a,mid,m,n,t);/// send the mid as row so we can find the element easily.
           
            return k;
        }
        else
        if(t<a[mid][0])//if the target element is smaller than first element of the row where we found the mid element than go that
        {               //then go for that row.
            e=mid-1;
        }
        else
        if(t>a[mid][n-1])//if the target is greater than last element of the row than go fort next line.
        {
            s=mid+1;
        }
        
        
    }
    
    return false;
}





int main()
{
   int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
   int n=4,m=4,tar=11;
    sea(a,m,n,tar);

    return 0;
}

