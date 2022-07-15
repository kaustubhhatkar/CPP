// https://codeforces.com/problemset/problem/476/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;

    int minimum_steps=n/2+n%2;

    while(minimum_steps<=n)
    {
        if(minimum_steps%m==0)
        {
            break;
        }
        minimum_steps++;
    } 

    if(minimum_steps>n)
    {
        cout<<-1<<endl;
    }
    else{
        cout<<minimum_steps<<endl;
    }

    return 0;
}