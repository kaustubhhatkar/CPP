// https://codeforces.com/problemset/problem/1095/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int j=0;
    int i=0;
    string ans="";
    while(j<str.size())
    {
        ans+=str[j];
        j=(i+1)*(i+2)/2;
        i++;
    }
    cout<<ans;
    return 0;
}