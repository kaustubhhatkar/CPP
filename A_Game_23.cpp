// https://codeforces.com/problemset/problem/1141/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;

    if(m%n==0)
    {
        int result=0;
        int d=m/n;

        while(d%2==0)
        {
            d/=2;
            result++;
        }
        while(d%3==0)
        {
            d/=3;
            result++;
        }
        if(d!=1)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<result<<endl;
        }
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}