#include<iostream>

using namespace std;
int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int maxi;
    int mini;
    int mid;
    if(x1>x2)
    {
        if(x1>x3)
        {
            maxi=x1;
            if(x2>x3)
            {
                mini=x3;
                mid=x2;
            }
            else
            {
                mini=x2;
                mid=x3;
            }
        }
        else
        {
            maxi=x3;
            mini=x2;
            mid=x1;
        }
    }
    else{

        if(x2>x3)
        {
            maxi=x2;
            if(x1>x3)
            {
                mini=x3;
                mid=x1;
            }
            else{
                mini=x1;
                mid=x3;
            }
        }
        else{
            maxi=x3;
            mini=x1;
            mid=x2;
        }

    }

    cout<<maxi-mini<<endl;

    return 0;
}