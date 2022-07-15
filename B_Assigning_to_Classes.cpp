// https://codeforces.com/problemset/problem/1300/B

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int num;
        cin>>num;
        vector<int>ans;
        for(int i=0;i<2*num;i++)
        {
            int temp;
            cin>>temp;
            ans.push_back(temp);
        }

        sort(ans.begin(),ans.end());

        int result=abs(ans[num-1]-ans[num]);
        cout<<result<<endl;
        
    }
    return 0;
}