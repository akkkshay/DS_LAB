#include<iostream>
using namespace std;

// BUBBLE SORT
// int flag=0,count=0;
// void BubbleSort(int arr[] , int n){
//     for(int i=0 ; i<n && flag==1 ; i++){
//         for(int j=0 ; j<n-1-i ; j++){
//             if(arr[j]>arr[j+1]){
//                 if(arr[j+1]>arr[j]){
//                 flag++;
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 }
//             }
//         }
//         count++;
//     }
//     cout<<"No of passes are : "<<count<<endl;
//     cout<<"Sorted Array is : "<<endl;
//     for(int i=0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// COUNTING SORT
// void CountingSort(int a[], int n , int k){
//     int c[k+1]={0};
//     for(int i=0 ; i<n ; i++){
//         c[a[i]]++;
//     }

//     for(int i=1 ; i<=k ; i++){
//         c[i]=c[i]+c[i-1];
//     }

//     int b[n];
//     for(int j=n-1 ; j>=0 ; j--){
//         b[c[a[j]]-1]=a[j];
//         c[a[j]]=c[a[j]]-1;
//     }

//     cout<<"Sorted Array Is : "<<endl;
//     for(int k=0 ; k<n ; k++){
//         cout<<b[k]<<" ";
//     }
// }

//COUNT SORT
// void CountSort(int a[] , int n){
//     int max=0;
//     for(int i=0 ; i<n ; i++){
//         if(a[i]>max){
//             max=a[i];
//         }
//     }
//     int count[max+1]={0};
//     for(int i=0 ; i<n ; i++){
//         count[a[i]]++;
//     }

//     int ans[n];
//     for(int i=1 ; i<=n ; i++){
//         count[i]=count[i]+count[i-1];
//     }
//     for(int i=0 ; i<n ; i++){
//         ans[count[a[i]]-1]=a[i];
//         count[a[i]]--;
//     }

//     for(int i=0 ; i<n ; i++){
//         cout<<ans[i]<<" ";
//     }

// }

//RADIX SORT




int main(){
    int n;
    cout<<"Enter Array Limit : "<<endl;
    cin>>n;
    int arr[n];
    int k = 0;
    cout<<"Enter Array Elements : "<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
        if(arr[i]>k){
            k=arr[i];
        }
    }
    cout<<"begin"<<endl;

}