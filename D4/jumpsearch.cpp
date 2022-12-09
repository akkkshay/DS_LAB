#include<bits/stdc++.h>
using namespace std;
int jumpsearch(int arr[], int n, int x)
{
   int start=0;
   int end=sqrt(n);
   while(arr[end]<x&&end<n)
   {
    start=end;
    end+=sqrt(n);
   }
   for(int i=start;i<=end;i++) 
   {
    if(arr[i]==x){
        return i;
    } 
   }
   return -1;
}

int main()
{
    cout<<"Enter array size : ";
    int n; cin>>n;
    int arr[n]; 
    cout<<"Enter Array : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter the number to be searched : "<<endl;
    int x; cin>>x;
    int c=jumpsearch(arr,n,x);
    if(c==-1) 
    cout<<"Element Not Present."<<endl;
    else
    cout<<"Element present at : "<<c<<" index"<<endl;
    return 0;
}