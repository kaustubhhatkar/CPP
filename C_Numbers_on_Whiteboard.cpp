// https://codeforces.com/problemset/problem/1430/C

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
        multiset<int>ds;
        for(int i=1;i<=num;i++)
        {
            ds.insert(i);
        }

        vector<pair<int,int>> ans;
        
        for(int i=0;i<num-1;i++)
        {
            auto it=ds.end();
            it--;
            int a=*it;
            ds.erase(it);
            it=ds.end();
            it--;
            int b=*it;
            ds.erase(it);
            ds.insert((a+b+1)/2);
            ans.push_back(make_pair(a,b));

        }
        cout<<*ds.begin()<<endl;
        for(int i=0;i<int(ans.size());i++)
        {
            cout<<ans[i].first<<' '<<ans[i].second<<endl;
        }

    }
    return 0;
}