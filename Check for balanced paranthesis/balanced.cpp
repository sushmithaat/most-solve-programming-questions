#include<iostream>
#include<stack>

using namespace std;

bool isbalance(string s)
{
    stack<char> st;
    char ch;

    int len=s.size();

    for(int i=0;i<len;i++)
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
        {
            st.push(s[i]);
            continue;
        }

        if(st.empty())
            return false;
        switch(s[i])
        {
            case ')':
                    ch=st.top();
                    st.pop();
                    if(ch=='{' || ch=='[')
                        return false;
                    break;
            case '}':
                    ch=st.top();
                    st.pop();
                    if(ch=='(' || ch=='[')
                        return false;
                    break;
            case ']':
                    ch=st.top();
                    st.pop();
                    if(ch=='{' || ch=='(')
                        return false;
                    break;


        }
    }
    return (st.empty());
}
int main()
{
    string s;

    cin>>s;

    if(isbalance(s))
        cout<<"Balanced\n";
    else
        cout<<"Not balanced\n";

    return 0;
}
