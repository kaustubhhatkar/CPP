// https://www.geeksforgeeks.org/print-all-possible-combinations-of-r-elements-in-a-given-array-of-size-n/

#include<bits/stdc++.h>

using namespace std;

void printCombination(int indx,int r,int n,vector<int>& arr,vector<int>& ans)
{
    if(ans.size()==r)
    {
        for(int i=0;i<r;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=indx;i<n;i++)
    {
        ans.push_back(arr[i]);
        printCombination(i+1,r,n,arr,ans);
        ans.pop_back();
    }
}

int main()                              
{
    //sorted array;
    vector<int>arr = {1,2, 3, 4, 5};
    int r = 3;
    vector<int>ans;
    printCombination(0, r,5,arr,ans);

    return 0;
}