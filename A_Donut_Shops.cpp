// https://codeforces.com/problemset/problem/1373/A?f0a28=1

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(a<c)
        {
            cout<<1<<" ";
            if(c/a<b)
            {
                cout<<b<<endl;                
            }
            else{
                cout<<-1<<endl;
            }
        }
        else
        {
            cout<<-1<<" ";
            if(c/a<b)
            {
                cout<<b<<endl;                
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}