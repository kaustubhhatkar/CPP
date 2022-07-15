//  https://codeforces.com/problemset/problem/219/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;

    map<char,int>mp;

    for(int i=0;i<str.size();i++)
    {
        mp[str[i]]++;
    }

    int flag=0;
    for(auto &it:mp)
    {

        if(it.second%n==0)
        {
            continue;
        }
        else{
            flag=1;
            break;
        }

    }

    string result;
    string final;
    if(flag)
    {
        cout<<-1<<endl;   
    }
    else{
        
        for(auto &it:mp)
        {
            int a=it.second/n;
            for(int i=0;i<a;i++)
            {
                result+=it.first;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            final+=result;
        }
        cout<<final<<endl;
    }
    return 0;
}