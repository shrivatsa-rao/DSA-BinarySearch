//This is c++ program to find the square root of a number.



#include <iostream>

using namespace std;

int binary(int n)
{
    int s=0,e=n;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        int sq=mid*mid;
        if(sq==n)
        {
            return mid;
        }
        if(sq>n)
        {
            e=mid-1;
        }
        else
        {
            ans=mid;//when the mid is less than the square root number you need to store it because we don't the value might
                    //be nearer to the required root value so it is better to store it.
            s=mid+1;
        }

        mid=s+(e-s)/2;
    }
    return ans;

}

double square(int  n,int  p,int k)
{
    double f=1;
    double ans=k;

    for(int i=0;i<p;i++)//you can decide how many digits after the decimal points.
    {
        f=f/10;// this f will be added to the intger which we have found.
        for(double j=ans;j*j<n;j=j+f)// every time added f to the j and then store it in the answer.
        {
            ans=j;
        }
    }
    return ans;
}

int main()
{

    int n,p;
    cout<<"enter the number to find the square root"<<endl;
    cin>>n;
    cout<<"enter precision upto which place we need to find the square root"<<endl;
    cin>>p;
    int k=binary(n);
    cout<<"the square root is"<<square(n,p,k);

    return 0;
}
