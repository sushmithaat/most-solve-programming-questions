#include<iostream>

using namespace std;

int main()
{
    int n,a[100],i;

    cin>>n;

    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }

    for(i=i-1;i>=0;i--)
    {
        cout<<a[i];
    }

    return 0;
}