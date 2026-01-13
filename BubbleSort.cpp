#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the element: ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(int i=0;i<n-1;i++)
    {
        bool booble=true;
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                booble=false;
            }
        }
        if(booble) break;
    }

    cout<<"After sorting: ";
    for(int i:v) cout<<i<<" ";
}