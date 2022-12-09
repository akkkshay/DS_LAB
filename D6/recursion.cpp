#include<iostream>
#include<math.h>
using namespace std;

//P1
// int fact(int n){
//     if(n<=1)
//     return 1;
//     return(n*fact(n-1));
    
// }


//P2
// int power(int a , int n){
//     int ans=0;
//     if(a==1)
//     return 1;
//     else if(a==0)
//     return 0;
//     else
//     return(pow(a,n)*pow(a,n-1));
// }

// int main(){
//     int n,a;
//     cin>>n;
//     cin>>a;
//     cout<<power(a,n);
// }


/*FIBONACCI SERIES  (P3)*/
// int DAT[101]={0};
// int fib(int n){
//     if(n==1||n==2)
//     return DAT[n]=n-1;
//     else
//     if(DAT[n]==0){
//         DAT[n]=(fib(n-1)+fib(n-2));
//     }
//     return DAT[n];
// }

// int main(){
//     for(int i=1 ; i<101 ; i++){
//         cout<<i<<" --> "<<" "<<fib(i)<<" "<<endl;
//     }
// }


/*P4*/
// int gcd(int x , int y){
//     if(y!=0){
//         return gcd(y, x%y);
//     }
//     else
//     return x;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     if(a>b){
//         cout<<gcd(a,b);
//     }
//     else{
//         cout<<gcd(b,a);
//     }
// }


/*P5*/
// int Binary_Search(int a[] , int ele , int l , int r){
//     int mid = (l + r)/2;

//     if(l>r){
//         return -1;
//     }
//     else if(a[mid]==ele){
//         return mid;
//     }
//     else if(a[mid]>ele){
//         Binary_Search(a , ele , l , mid-1);
//     }
//     else{
//         Binary_Search(a , ele , mid+1 ,r);
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n],num,l=0,r=n-1;
//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     cin>>num;
//     cout<<Binary_Search(arr , num , l ,r)<<endl;
// }