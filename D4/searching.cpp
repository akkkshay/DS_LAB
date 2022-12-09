#include<iostream>
using namespace std;

void LinearSearch(int arr[] , int num , int l , int h){
    for(int j=0 ; j<h ; j++){
        if(arr[j]==num){
            cout<<"The Element "<<num<<" is present at "<<j<<" index."<<endl;
        }
    }
}

void TernarySearch(int arr[] , int num , int l , int h){
    int mid1=l+(h-l)/3;
    int mid2=h-(h-l)/3;

    if(arr[mid1]==num){
        cout<<"The Element "<<num<<" is present at "<<mid1<<" index."<<endl;
    }
    else if(arr[mid2]==num){
        cout<<"The Element "<<num<<" is present at "<<mid2<<" index."<<endl;
    }
    else if(num<arr[mid1]){
        TernarySearch()
    }
}

void BinarySearch(int arr[] , int num , int l , int h){
    int mid=(l+h)/2;
    if(l<=h){
        if(arr[mid]==num){
        cout<<"The Element "<<num<<" is present at "<<mid<<" index."<<endl;
        }

        else if(arr[mid]>num){
            BinarySearch(arr , num , l , mid-1);
        }
        else{
            BinarySearch(arr , num , mid+1 , h);
        }
    }
        else{
            cout<<"Element Doesn't Exist."<<endl;
            }
}


int main(){
    int n;
    cout<<"Enter Number Of Elements : "<<endl;
    cin>>n;
    int arr[n],num,l=0;
    cout<<"Enter elements of array : "<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"Enter Element to be searched : "<<endl;
    cin>>num;

    LinearSearch(arr , num , l , n);
    BinarySearch(arr , num , l , n);
}