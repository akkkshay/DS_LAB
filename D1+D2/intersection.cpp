#include<stdio.h>
#include<iostream>
using namespace std;

void intersectionarray(int a[],int m,int b[],int n)
{
    int c[m+n],i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
       {
        i++;
       }
       else if(b[j]<a[i])
       {
        j++;
       }
       else
       {
        c[k]=a[i];
        i++;
        j++;
        k++;
       }
    }

 for(i=0;i<k;i++)
 {
    cout<<(c[i]);
 }
}

int main()
{
    int n1,n2,i;
    cout<<"Enter Number Of Arrays : "<<endl;
    cin>>n1>>n2;
    int a[n1],b[n2];
    cout<<"Enter 1st Array : "<<endl;
    for(i=0;i<n1;i++){
    cin>>a[i];
    }
    cout<<"Enter 2nd Array : "<<endl;
    for(i=0;i<n2;i++){
    cin>>b[i];
    }
    intersectionarray(a,n1,b,n2);
}