/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//This is leet code question check if double exits.
//c++ program to check double exists in an array.

#include <bits/stdc++.h>

using namespace std;
bool doubles(int a[],int b,int k,int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        
        if(a[mid]==k && mid!=b)
        {
            return true;
        }
        else
        if(k>a[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
       
        mid=s+(e-s)/2;
      
    }
    
   return false;
    
}

int main()
{
    int a[]={0,3,4,7,5,1};
    int flag=0;
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);//here first we need to sort the array and then we need to send to the function so while send 
    for(int i=0;i<n;i++)//just send the array elements by multiplying it by 2 and then send the position of that element.
    {
        if(doubles(a,i,2*a[i],n))//one more main condition is i != j the position of the element should not be 
        {                       //equal to the position of the double of the element.
           flag=1;
        }
    }
    
    if(flag==1)
    {
        cout<<"double exists\n";
    }
    else
    {
        cout<<"double does not exist\n";
    }

     return 0;
 
}
