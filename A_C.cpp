// https://codeforces.com/problemset/problem/1368/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        int count=0;
        while(a<=k && b<=k)
        {
            if(a>b)
            {
                b+=a;
            }
            else
            {
                a+=b;
            }
            count++;
        }
        cout<<count<<endl;
    }
    
    return 0;
}