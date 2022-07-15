// https://codeforces.com/problemset/problem/236/A
#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    string str;
    cin>>str;
    map<char,int>mp;
    for(int i=0;i<str.size();i++)
    {
        if(mp[str[i]]==0)
        {
            mp[str[i]]+=1;
        }
    }
    if(mp.size()%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}