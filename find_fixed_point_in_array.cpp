//This a c++ program to find th fixed point using binary search. Fixed point mans value=index;

#include <iostream>

using namespace std;

int lin(int a[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(a[mid]==mid)
        {
            return mid;
        }
        else if(a[mid]>mid) //here the condition is e=mid-1 bcuz we need go to left side of this condition not on ryt bcuz the left constains small
        {
               e=mid-1;     //   elemts than ryt side ryt has large number.
        }                      {

        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }

}

int main()
{
    int a[] = { -10, -1, 0, 2, 4, 11, 30, 50};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Fixed Point is " << lin(a, n);
    return 0;
}
