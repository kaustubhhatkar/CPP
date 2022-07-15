// https://codeforces.com/problemset/problem/339/A
#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    string str;
    cin>>str;
    vector<int>ans;
    for(int i=0;i<str.size();i+=2)
    {
        if(str[i]=='1')
        {
            ans.push_back(1);
        }
        else if(str[i]=='2')
        {
            ans.push_back(2);
        }
        else{
            ans.push_back(3);
        }
    }

    sort(ans.begin(),ans.end());

    cout<<ans[0];
    for(int i=1;i<ans.size();i++)
    {
        cout<<"+"<<ans[i];
    }
    cout<<endl;
    return 0;
}