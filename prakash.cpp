#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    string str;
    cin>>str;

    for(int i=0;i<str.size();i++)
    {
        int count=0;
        for(int j=0;j<str.size();j++)
        {  
            if(str[i]==str[j])
            {
                count++;
            }
        }
        cout<<str[i]<<":"<<count<<endl;
    }
    return 0;
}