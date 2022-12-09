#include<iostream>
using namespace std;
void mergearray(int a[],int m,int b[],int n)
{
    int c[m+n],i=0,j=0,k=0;
    while(i<m&&j<n
    {
        if(a[i]<b[j])
       {
         c[k]=a[i];
        i++;
        k++;
       }
       else if(b[j]<a[i])
       {
        c[k]=b[j];
        j++;
        k++;
        }
       else
      { 
        c[k]=a[i];
        k++; 
        i++;
        j++;
      }
    }
    while(i<m)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<n)
    {
        c[k]=b[j];
        k++;
        j++;
    }
 for(i=0;i<k;i++)
 {
    cout<<c[i]<<" ";
 }
}
int main()
{
    int n1,n2,i;
    cin>>n1>>n2;
    int a[n1],b[n2];
    for(i=0;i<n1;i++)
    cin>>a[i];
    for(i=0;i<n2;i++)
    cin>>b[i];
    mergearray(a,n1,b,n2);
    return 0;
}