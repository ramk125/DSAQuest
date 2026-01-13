#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>>v;
    int m=0,n=0;
    cout<<"Enter row and col: ";
    cin>>m>>n;
    cout<<"Enter value of row and col: ";
    for(int i=0;i<m;i++)
    {
        vector<int>curr(n,0);
        for(int j=0;j<n;j++)
        cin>>curr[j];
        v.push_back(curr);
    }

    cout<<"Please enter start and destination position: ";
    int start[2];
    int des[2];

    cin>>start[0]>>start[1];
    cin>>des[0]>>des[1];
    cout<<"Start: ["<<start[0]<<" , "<<start[1]<<"]";
    cout<<"Destination: ["<<des[0]<<" , "<<des[1]<<"]";

    
}