// https://codeforces.com/problemset/problem/1433/A
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
        int num=str[0]-'0'-1;
        int len=str.size();
        cout<<(num*10)+(len*(len+1)/2)<<endl;
    }
    
    return 0;
}