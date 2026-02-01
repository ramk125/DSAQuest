#include<iostream>
#include<vector>
using namespace std;
int fun(int n,vector<int>&dp)
{
    if(n<=1)return n;
    if(dp[n]!=-1)return dp[n];
    dp[n]=fun(n-1,dp)+fun(n-2,dp);
    return dp[n];
}
int main()
{
    int n=0;
    cout<<"Enter the number: ";
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<fun(n,dp);
    return 0;
}