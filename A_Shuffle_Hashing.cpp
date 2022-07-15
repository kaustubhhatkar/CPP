// https://codeforces.com/problemset/problem/1278/A

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   while(n--)
   {
        string pass_word,hash;
        cin>>pass_word>>hash;

        map<char,int>mp,test;

        int p=pass_word.size();

        for(int i=0;i<p;i++)
        {
            mp[pass_word[i]]++;
        }
        bool flag=false;
       
        for(int i=0;i<hash.size();i++)
        {
            if(mp[hash[i]]>0)
            {
                test=mp;
                int count=0;
                for(int k=i;k<hash.size();k++)
                {
                   
                    if(test[hash[k]]==0)
                    {
                        break;
                    }
                    count++;
                    test[hash[k]]--;
                    if(count==p)
                    {
                        break;
                    }
                }

                if(count==p)
                {
                    flag=true;
                    break;
                }
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