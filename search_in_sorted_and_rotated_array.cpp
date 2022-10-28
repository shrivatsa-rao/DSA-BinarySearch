/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//C++ program to search the element in sorted and rotated array.

#include <iostream>

using namespace std;
int getp(int a[],int n);
void search(int a[],int n,int t,int s,int e);
int bin(int a[],int s,int e,int t);

int main()
{
    int a[]={7,9,1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    int t=7;
    int s=0;
    int e=n-1;
    search(a,n,t,s,e);

    return 0;
}

void search(int a[],int n,int t,int s,int e)
{
    int p=getp(a,n);  //first find the pivot using pivot function then 
    if(t>=a[p] && t<=a[e])  //see the notes this is for second line in graph. we ned to check target is greater than
    {                       // we need to see target is greater than pivot and less than end element in array.
        int k= bin(a,p,n-1,t);
        cout<<k<<endl;
    }
    else
    {
        int g= bin(a,0,p-1,t);
        cout<<g<<endl;
    }
    
}


int getp(int a[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(a[mid]>=a[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
    
}


int bin(int a[],int s,int e,int t)
{
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(a[mid]==t)
        {
            return mid;
        }
        
        if(t>a[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    
}





