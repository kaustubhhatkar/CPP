// https://codeforces.com/problemset/problem/1027/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;

        bool flag=true;
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if(str[i]==str[j] || str[i]-1==str[j]-1 || str[i]-1==str[j]+1 || str[i]+1==str[j]-1 ||str[i]+1==str[j]+1)
            {
                i++;
                j--;
            }
            else{
                flag=false;
                break;
            }

        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}