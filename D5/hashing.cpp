#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int arr[a][b],m=0;
    for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<b ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0 ; i<b ; i++){
        if(arr[1][i]>m)
        m=arr[1][i];
    }
    m=m+1;
    int dat[m]={0};
    for(int i=0 ; i<b ; i++){
        int k=arr[1][i];
        if(dat[k]==0){
            dat[k]=arr[0][i];
            continue;
        }

        while(1){
            k=(k+1)%m;
            if(dat[k]==0){
                dat[k]=arr[0][i];
                break;
            }
        }
    }
    for(int i=0 ; i<m ; i++){
        if(dat[i]!=0)
        cout<<dat[i]<<" "<<i<<endl;
    }

}