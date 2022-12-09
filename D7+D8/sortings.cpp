//Bubble Sort
// #include<iostream>
// using namespace std;
// void bsort(int a[],int n){
//     int t,i,c=0;
//     int flag=1;
//     for(i=0;i<n && flag==1;i++){
//         flag=0;
//         for(int j=0;j<n-1;j++){
//             if(a[j]>a[j+1]){
//                 t=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=t;
//                 flag=1;
                
//             }
//         }
//         c++;
//     }
//     cout<<"number of passes: "<<c<<endl;
//     cout<<"The sorted array is: ";
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter size of array: ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     bsort(a,n);
// }


//SELECTION SORT
// #include<iostream>
// using namespace std;
// void ssort(int a[],int n){
//     int t;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]>a[j]){
//                 t=a[i];
//                 a[i]=a[j];
//                 a[j]=t;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";    }
// }
// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter the elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"Sorted array is: ";
//     ssort(a,n);
// }


//INSERTION SORT
// #include<iostream>
// using namespace std;
// void isort(int a[],int n){
//     for(int i=1;i<n;i++){
//      int t=a[i];
//      int j=i-1;
//      while(j>=0 && a[j]>t){
//         a[j+1]=a[j];
//         j--;
//      }  
//      a[j+1]=t; 
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i];    }
// }
// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter the elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"Sorted array is: ";
//     isort(a,n);
// }


//SHELL SORT
// #include<bits/stdc++.h>
// using namespace std;
// void Selection_Sort(int a[],int n){
//  int i , j , min , temp=0;
//  for(i=0 ; i<=n-1 ; i++){
//  min=i;
//  for(j=i+1 ; j<n ; j++){
//  if(a[j]<a[min]){
//  min=j;
//  temp=a[i];
//  a[i]=a[min];
//  a[min]=temp;
//  }
//  }
//  }
//  for(j=0 ; j<n ; j++){
//  cout<<a[j]<<" ";
//  }
// }
// int main(){
//  int n,i,a[10];
//  cout<<"Enter number of element :- ";
//  cin>>n;
//  cout<<"Enter the array element :- ";
//  for(i=0 ; i<n ; i++){
//  cin>>a[i];
//  }
//  Selection_Sort( a , n );
// }


//MERGE SORT
// #include <bits/stdc++.h>
// using namespace std;
// void merge(int a[],int l,int mid,int h){
//     int i=l,j=mid+1,k=l;
//     int c[k];
//     while(i<mid && j<h){
//         if(a[i]<a[j]){
//             c[k]=a[i];
//             i++;
//             k++;
//         }
//         else if(a[i]>a[j]){
//             c[k]=a[j];
//             j++;
//             k++;
//         }  
//     }
//     while(i<mid){
//         c[k]=a[i];
//         i++;
//         k++;
//     }
//     while(j<h){
//         c[k]=a[j];
//         j++;
//         k++;
//     }
//     for(int i=0;i<=k;i++){
//         a[i]=c[i];
//     }
//     for(i=0;i<=k;i++){
//         cout<<a[i]<<" ";
//     } 
// }
// int mergesort(int a[],int l,int h){
//     while(l<h){
//         int mid=(l+h)/2;
//         mergesort(a,l,mid);
//         mergesort(a,mid+1,h);
//         merge(a,l,mid,h);
//     }
// }
// int main(){
// 	int n, i;
// 	cout<<"Enter the size of array :- ";
// 	cin>>n;
//  	int a[n];
//  	cout<<"Enter the elements :- ";
// 	for(i = 0; i < n; i++){
// 		cin>>a[i];
// 	}
//     int l=0;
//     int h=n-1;
//     cout<<"The sorted array is: ";
//     mergesort(a,l,h);
    
// }


//QUICK SORT
// #include<bits/stdc++.h>
// using namespace std;
// int partition(int a[] , int low , int high){
//     int i=low , j=high+1 ;
//     int pivot=a[low];
//     do{
//         do{
//             i++;
//         }while(a[i]<pivot);
//         do{
//             j--;
//         }while(a[j]>pivot);
//          if(i<j){
//             swap(a[i],a[j]);
//         }
//     }while(i<j);
//     swap(a[j],a[low]);
//         return j;
// }
// int Quick_Sort(int a[] , int low , int high){
//     if(low<high){
//         int j=partition(a,low,high);
//         Quick_Sort(a, low, j-1);
//         Quick_Sort(a, j+1, high);

//     }
//     return 0;
// }
// int main(){
// 	int n, i;
// 	cout<<"Enter the number of element :- ";
// 	cin>>n;
//  	int a[n+1];
//  	cout<<"Enter the elements :- ";
// 	for(i = 0; i < n; i++){
// 		cin>>a[i];
// 	}
//     //a[n]=INT_MAX;
//  	Quick_Sort(a, 0, n-1);
// 	cout<<"Sorted array :-";
// 	for (i = 0; i < n; i++)
//         cout<<a[i]<<" ";
// }


//MEDIAN QUICK SORT
// #include<bits/stdc++.h>
// using namespace std;
// int partition(int a[] , int low , int high){
//     int mid=((low+high)/2);
//     swap(a[low],a[mid]);
//     int i=low , j=high+1 ;
//     int pivot=a[low];
//     do{
//         do{
//             i++;
//         }while(a[i]<pivot);
//         do{
//             j--;
//         }while(a[j]>pivot);
//          if(i<j){
//             swap(a[i],a[j]);
//         }
//     }while(i<j);
//     swap(a[j],a[low]);
//         return j;
// }
// int Quick_Sort(int a[] , int low , int high){
//     if(low<high){
//         int j=partition(a,low,high);
//         Quick_Sort(a, low, j-1);
//         Quick_Sort(a, j+1, high);

//     }
//     return 0;
// }
// int main(){
// 	int n, i;
// 	cout<<"Enter the number of element :- ";
// 	cin>>n;
//  	int a[n+1];
//  	cout<<"Enter the elements :- ";
// 	for(i = 0; i < n; i++){
// 		cin>>a[i];
// 	}
//     //a[n]=INT_MAX;
//  	Quick_Sort(a, 0, n-1);
// 	cout<<"Sorted array :-";
// 	for (i = 0; i < n; i++)
//         cout<<a[i]<<" ";
// }



//RANDOMIZED QUICK SORT
// #include<bits/stdc++.h>
// using namespace std;
// int partition(int a[] , int low , int high){
//     int x=low+(rand()% high+1);
//     swap(a[low],a[x]);
//     int i=low , j=high+1 ;
//     int pivot=a[low];
//     do{
//         do{
//             i++;
//         }while(a[i]<pivot);
//         do{
//             j--;
//         }while(a[j]>pivot);
//          if(i<j){
//             swap(a[i],a[j]);
//         }
//     }while(i<j);
//     swap(a[j],a[low]);
//         return j;
// }
// int Quick_Sort(int a[] , int low , int high){
//     if(low<high){
//         int j=partition(a,low,high);
//         Quick_Sort(a, low, j-1);
//         Quick_Sort(a, j+1, high);

//     }
//     return 0;
// }
// int main(){
// 	int n, i;
// 	cout<<"Enter the number of element :- ";
// 	cin>>n;
//  	int a[n+1];
//  	cout<<"Enter the elements :- ";
// 	for(i = 0; i < n; i++){
// 		cin>>a[i];
// 	}
//     //a[n]=INT_MAX;
//  	Quick_Sort(a, 0, n-1);
// 	cout<<"Sorted array :-";
// 	for (i = 0; i < n; i++)
//         cout<<a[i]<<" ";
// }


//COUNTING SORT
// #include<iostream>
// using namespace std;
// int csort(int a[],int n,int k){
//     int b[n];
    
//     int c[k+1]={0};
//     for(int i=0;i<n;i++){
//         c[a[i]]=c[a[i]]+1;
//     }
//     for(int i=1;i<=k;i++){
//         c[i]=c[i]+c[i-1];
//     }
//     for(int j=n-1;j>=0;j--){
//         b[c[a[j]]-1]=a[j];
//         c[a[j]]=c[a[j]]-1;
//     }
//     for(int i=0;i<n;i++){
//         cout<<b[i];
//     }
//     return 0;
    
// }
// int main(){
//     int n;
//     cout<<"Enter size of array: ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int k=a[0];
//     for(int i=0;i<n;i++){
//         if(a[i]>k)
//             k=a[i];
//     }
//     csort(a,n,k);
// }


//RADIX SORT
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of array: ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int k=a[0];
//     for(int i=0;i<n;i++){
//         if(a[i]>k)
//             k=a[i];
//     }
//     rsort(a,n,k);
// }