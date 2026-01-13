#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={3,1,8,5,0,4,6,7,8};
    for(int i=0;i<v.size()-1;i++)
    {
        int small=i;
        for(int j=i+1;j<v.size();j++)
        {
            if(v[j]<v[small]) small=j;
        }
        swap(v[i],v[small]);
    }
    for(int i:v)
    cout<<i;
}