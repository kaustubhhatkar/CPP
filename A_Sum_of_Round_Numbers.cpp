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
        int count=1;
      
        vector<int>ans;
        while(num)
        {   
            int temp=num%10;
            if(temp!=0)
            {
                ans.push_back(temp*count);
             
            }
            count*=10;
            num=num/10;
        }
        cout<<ans.size()<<endl;
        for(auto it:ans)
        {   
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}