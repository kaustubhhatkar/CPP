// https://codeforces.com/problemset/problem/492/A
#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int count=0;
    int i=1;
    int ans=0;
    while(ans<n)
    {
        ans+=i*(i+1)/2;
        if(ans>n)
        {
            break;
        }
        count++;
        i++;
    }

    cout<<count<<endl;
    return 0;
}