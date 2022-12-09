#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int bs(int arr[], int l, int r, int x)
{
    if (l > r)
    return -1;

    int mid = (l + r) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] < x)
        return bs(arr, mid + 1, r, x);

    else
        return bs(arr, l, mid - 1, x);
}
int exponentialsearch(int a[], int n, int x)
{
    if (a[0] == x)
        return 0;
    int i = 1;
    while (a[i] <= x && i < n)
    {
        i = i * 2;    
    }
    return bs(a, i / 2, i, x);
    
}

int main()
{
    int n;
    cout<<"Enter array size : "<<endl;
    cin >> n;
    int a[n];
    cout<<"Enter Array : "<<endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cout<<"Enter Number To be searched : ";
    cin >> x;
    int c = exponentialsearch(a, n, x);
    if(c==-1){
        cout<<"Element not found."<<endl;
    }
    else{
        cout<<"Element found at "<<c<<" index."<<endl;
    }
    return 0;
}