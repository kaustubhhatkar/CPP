// https://codeforces.com/problemset/problem/281/A
#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    string str;
    cin>>str;
    if(str[0]>64 && str[0]<=90)
    {
        cout<<str<<endl;
    }
    else{
        str[0]-=32;
        cout<<str<<endl;
    }
    return 0;
}