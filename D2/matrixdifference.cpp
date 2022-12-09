#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
    int j,k;
    cin>>j>>k;
    int b[j][k];
    if(m==j&&n==k)
    {
    for(int i=0;i<m;i++)
    {
        for(int l=0;l<n;l++)
        cin>>a[i][l];
    }
        for(int i=0;i<j;i++)
    {
        for(int l=0;l<k;l++)
        cin>>b[i][l];
    }

    for(int i=0;i<m;i++)
    {
        for(int l=0;l<n;l++)
        {
            a[i][l]=a[i][l]-b[i][l];
            cout<<a[i][l]<<" ";
        }
        cout<<endl;
    }
    }
    else
    cout<<"Not possible"<<endl;
}