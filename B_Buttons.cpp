//  https://codeforces.com/problemset/problem/268/B

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    
    int ans=0;
    for(int i=1;i<n;i++)
    {
        if(ans==0)
        {
            ans=n;
        }
        else{
           for(int j=i;j<n;j++)
           {
               ans+=i;
           }
           ans+=1;    
        }   
    }

    cout<<ans+1<<endl;
    return 0;
}