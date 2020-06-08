#include<iostream>

using namespace std;

int main()
{
    int n,r=0;

    cin>>n;

    while(n!=0)
    {
        n/=10;
        r++;
    }
    cout<<r;

    return 0;
}
