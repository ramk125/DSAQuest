#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<vector<int>>  v(5,vector<int>(5,0));
    vector<vector<int>>v(5,vector<int>(5));

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>v[i][j];
        }
        cout<<endl;
    }
    
    int zero=0;
    int m=0,n=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(v[i][j]==0) zero++;
            if(v[i][j]==1)
            {
                m=i;n=j;
            }
        }
    }
    if(zero!=24) cout<<-1;
    cout<<abs(m-2)+abs(n-2);
}