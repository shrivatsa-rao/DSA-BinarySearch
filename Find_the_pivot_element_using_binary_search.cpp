/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



//This is a c++ program to find the pivot element in the array using binary search


#include <iostream>

using namespace std;

int bin(int a[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e) //dont use s<=e becuse consition will be failing so use only s<e.
    {
        if(a[mid]>=a[0]) //here they are using s=mid+1 because pivot element will be in the seond part so 
         {              //they are using mid+1;
            s=mid+1;
        }
        else
        {
            e=mid;//not using mid-1 becuz if we use mid-1 then end will go to the first line so we need to use e=mid;
        }
        
        mid=s+(e-s)/2;
    }
    
    return s;
}



//updated and below solution works for all test cases in leetcode.
class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int s=0;
        int n=a.size();
        int e=n-1;
        int mid;
        
        while(s<e)
        {
            mid=s+(e-s)/2;
            if(a[mid]<a[mid+1])
            {
                s=mid+1;
            }
            else
            {
                e=mid;
            }
        }
        return s;
    }
};








int main()
{
   int a[]={4,5,6,7,8,1,2,3};
   int n=sizeof(a)/sizeof(a[0]);
   int k=bin(a,n);
   cout<<"the pivot element is "<<k<<endl;

    return 0;
}
