#include<iostream>

using namespace std;

int main()
{
    int num,n1=0,n2=1,next;

    cin>>num;

    for(int i=1;i<=num;i++)
    {
        cout<<n1<<" ";
        next=n1+n2;
        n1=n2;
        n2=next;
    }
    return 0;
}



