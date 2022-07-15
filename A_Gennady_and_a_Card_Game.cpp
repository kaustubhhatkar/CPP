// https://codeforces.com/problemset/problem/1097/A
#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    string str;
    cin>>str;
    vector<string>ans;
    for(int i=0;i<5;i++)
    {
        string s;
        cin>>s;
        ans.emplace_back(s);
    }

    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(ans[i][0]==str[0] || ans[i][1]==str[1])
        {
            flag=1;
            break;
        }
    }

    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}