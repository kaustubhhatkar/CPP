#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n,0);
    vector<int>ans(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+1==arr[j])
            {
                ans[(i)%n]=j+1;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
   return 0;
}