// https://codeforces.com/problemset/problem/131/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    string str;
    cin>>str;

    bool flag=true;

    
    
    for(int i=1;i<str.size();i++)
    {
        if(str[i]>96 && str[i]<=122)   
        {
            flag=false;
            break;
        }
    }

    if(flag)
    {
        for(int i=0;i<str.size();i++)
        {
            if(str[i]>64 && str[i]<=90)   
            {
                str[i]=str[i]+32;
            }
            else{
                str[i]=str[i]-32;
            }
        }
    }
    cout<<str<<endl;
    return 0;
}