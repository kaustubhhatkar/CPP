// https://codeforces.com/problemset/problem/118/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    string str;
    cin>>str;
    string ans="";
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='y'|| str[i]=='Y'|| str[i]=='o' ||str[i]=='i'|| str[i]=='u'|| str[i]=='A' || str[i]=='E' ||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            continue;
        }
        else{
            ans+='.';
            if(str[i]>64 && str[i]<=90)
            {
                ans+=str[i]+32;
            }
            else{
                ans+=str[i];
            }
        }
    }
    cout<<ans;
    return 0;
}