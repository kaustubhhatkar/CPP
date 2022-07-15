// https://codeforces.com/problemset/problem/1244/B
#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string str;
        cin>>n;
        cin>>str;
        if(str[0]=='1' && str[n-1]=='1')
        {
            cout<<2*n<<endl;
        }
        else{
            
            int left=0,right=0,one=0,ans=0;
            for(int i=0;i<n;i++)
            {
                if(str[i]=='1')
                {
                    one=1;
                    left=i;
                    break;
                }
            }

            int i=-1;
            for(int j=n-1;j>=0;j--)
            {
                i++;
                if(str[j]=='1')
                {
                    one=1;
                    right=i;
                    break;
                }
            }

            ans=2*(n-min(left,right));
            if(one==0)
            {
                cout<<n<<endl;
            }
            else{
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}