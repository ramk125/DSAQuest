#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n=0;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(v[j]<v[min_index]) min_index=j;
        }
        swap(v[i],v[min_index]);
    }
    for(int i:v) cout<<i<<" ";

}