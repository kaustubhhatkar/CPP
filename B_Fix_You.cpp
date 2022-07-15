// https://codeforces.com/problemset/problem/1391/B

#include<bits/stdc++.h>
  
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int row,col;
        cin>>row>>col;

        vector<vector<char>>matrix(row,vector<char>(col,0));

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cin>>matrix[i][j];
            }
        }

        int count=0;
        for(int i=0;i<row-1;i++)
        {
            if(matrix[i][col-1]=='R')
            {
                count++;
            }
        }
        for(int i=0;i<col-1;i++)
        {
            if(matrix[row-1][i]=='D')
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}