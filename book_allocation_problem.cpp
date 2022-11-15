/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


//this is the book allocation problem using binary search method.

#include <iostream>

using namespace std;

bool posb(int s,int e,int a[],int mid,int m,int n)
{
    
    int psum=0;
    int st=1;// first student present 
    for(int i=0;i<n;i++)
    {
        if(psum+a[i]<=mid)// here we are adding the all elemnets of array and then checking whether it is less than mid
        {               // if true then store the sum and it will return true when it satifies for all students.
            psum=psum+a[i];
        }
        else
        {
            st++;// increment student.
            if(st>m || a[i]>mid)//check student is greater then m and also if array element greater than mi element.
            {
                return false;
            }
            
            psum=a[i];/// store the element when first conditon this is for second student.
        }
    }
    
    return true;
}

int cmpr(int a[],int n,int m)
{
    int s=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];   //so here we are taking sum of array then intialize to 'e' of the array.
    }
    
    int e=sum;
    
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(posb(s,e,a,mid,m,n)) //if posb return true then store the ans this means solution exstits for the sum
        {                       //which might be less than equal to the mid element hence we can tell that solution   
            ans=mid;   // might exist below the nid value also hence we need to store.
            e=mid-1;
        }
        else
        {
            s=mid+1; // when it returns false this will execute hence when solution does not exits becuse it can't satisfy 
        }           // for all three students hence we are moving little bit forward.
         mid=s+(e-s)/2;
    }
    
    return ans;
}



int main()
{
    int a[]={12,34,67,90};
    int n=sizeof(a)/sizeof(a[0]);
    int m,k;
    cout<<"enter the number of students\n";
    cin>>m;
    k=cmpr(a,n,m);
    cout<<"minimum pages is"<<k;

    return 0;
}
