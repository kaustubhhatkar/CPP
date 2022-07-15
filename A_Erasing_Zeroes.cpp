// https://codeforces.com/problemset/problem/1303/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        int i=0;
        int j=str.size()-1;
        int count=0;
        while(i<=j)
        {   
            if(str[i]=='1' && str[j]=='1')
            {
                break;
            }
            if(str[i]=='0')
            {
                i++;
            }
            if(str[j]=='0')
            {
                j--;
            }
        }
        for(int indx=i;indx<=j;indx++)
        {
            if(str[indx]=='0')
            {
                count++;
            }
        } 
        cout<<count<<endl;
    }
    return 0;
}