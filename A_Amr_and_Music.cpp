// https://codeforces.com/problemset/problem/507/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n,days;
    cin>>n>>days;
    pair<int,int> Arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i].first;
        Arr[i].second=i;
    }
    sort(Arr,Arr+n);
    vector<int>ans;
    int flag=0;
    int count=0;
    while(count<n)
    {
        if(Arr[count].first<=days)
        {
            days-=Arr[count].first;
            ans.push_back(Arr[count].second+1);
            flag++;
        }
        count++;
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {

        cout<<ans[i]<<" ";
    }
    return 0;
}