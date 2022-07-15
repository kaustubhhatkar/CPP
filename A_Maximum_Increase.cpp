// https://codeforces.com/problemset/problem/702/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int num;
    cin>>num;
    int maxi=1;
    int count=1;
    vector<int>ans;
    for(int i=0;i<num;i++)
    {
        int temp;
        cin>>temp;
        ans.push_back(temp);
    }

    for(int i=0;i<num-1;i++)
    {
      
        if(ans[i]<ans[i+1])
        {
            count++;
        }
        else{
            count=1;
        }
        maxi=max(maxi,count);
    }
    cout<<maxi<<endl;
    return 0;
}