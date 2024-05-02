#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s;
    int c=0;
    cin>>s1>>s2>>s;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(s[i]==s1[j])
            {
                c++;
                break;
            }
            else if(s[i]==s2[j])
            {
                c++;
                break;
            }
        }
    }
    if(c==l)
        cout<<"YES";

    else
        cout<<"NO";

    return 0;
}
