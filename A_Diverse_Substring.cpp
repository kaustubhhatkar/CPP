// https://codeforces.com/problemset/problem/1073/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    string ans="";
    int j=1;
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        if(str[i]!=str[j])
        {
            ans+=str[i];
            ans+=str[j];
            flag=1;
            break;
        }
        j++;
    }

    if(flag)
    {
        cout<<"YES"<<endl;
        cout<<ans<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}