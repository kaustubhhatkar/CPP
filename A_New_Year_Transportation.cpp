// https://codeforces.com/problemset/problem/500/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;

    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int j=0;

    bool flag=false;
    while(j<m)
    {
        if(j==m-1)
        {
            flag=true;
            break;
        }
        j+=A[j];
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