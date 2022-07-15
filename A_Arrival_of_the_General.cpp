// https://codeforces.com/problemset/problem/144/A
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        ans.push_back(temp);
    }

    int maxi=INT_MIN;
    int min_indx;
    int mini=INT_MAX;
    int max_indx;

    for(int i=0;i<n;i++)
    {
        if(ans[i]>maxi)
        {
            maxi=ans[i];
            max_indx=i;
        }
        if(ans[i]<=mini)
        {
            mini=ans[i];
            min_indx=i;
        }
    }

    if(min_indx<max_indx)
    {
        cout<<max_indx+n-min_indx-2<<endl; 
    }
    else
    {
        cout<<max_indx+n-min_indx-1<<endl;
    }
    return 0;
}