/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//this is a c++ program to find the element in sorted array of unknown size.

#include <iostream>

using namespace std;

int search(int a[],int key,int s,int e)
{
    int mid=(s+e)/2;
    while(s<=e)
    {
        if(a[mid]==key)
        {
            return 1;
        }
        if(key>a[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return 0;
}

int main()
{
    int a[]={-1,0,3,5,9,12};
    int s=0;
    int e=1;
    int key=100;
    while(a[e]<key)//this is where we know s=0 but to find high we are first checking a[e]<key becasue this condition 
    {// helps us to give proper s and e to find the element do not put equal in a[e]<key because that does not hold good.
        s=e;// if condition holds good then give s=e and mulitiply e by 2. So we incrementing e by 2 positions.
        e=2*e;
    }
    
    int k=search(a,key,s,e);
    if(k==1)
    {
        cout<<"element exists";
    }
    else
    {
        cout<<"element does not exists";
    }
    return 0;
}
