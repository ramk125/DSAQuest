#include<iostream>
#include<vector>
using namespace std;
int fab(int n,vector<int>&v)
{
    if(n==0) return 0;
    if(n==1) return 1;
    if(v[n]!=-1) return v[n];
    v[n] = fab(n-1, v) + fab(n-2, v);
    return v[n];
}

int main()
{
    int n=0;
    cout<<"Enter the number: ";
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<"Fabonacci number is: "<<fab(n,dp);
}