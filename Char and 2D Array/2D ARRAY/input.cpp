#include<iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int m,n;
    cin>>m>>n;

    // Takeing input
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    // print row wise
    cout<<"Row wise :"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    // cloum wise
    cout<<"Column wise :"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}