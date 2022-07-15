// https://codeforces.com/contest/139/problem/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n;
    cin>>n;

    vector<int>ans;
    for(int i=0;i<7;i++)
    {
        int temp;
        cin>>temp;
        ans.push_back(temp);
    }

    int result=0;
    int i=0;
    while(result<n)
    {
        if(i==7)
        {
            i=0;
        }
        result+=ans[i];
        i++;
    }

    cout<<i<<endl;
    return 0;
}