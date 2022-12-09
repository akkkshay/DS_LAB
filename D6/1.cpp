#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll ans;
    cin >> ans;
    while(ans--){
        ll n;
        cin >> n;
        string str;
        string ans = "";
        cin >> str;
        int i = 0;
        int j = n-1;

        while(i <= j){
            if(str[i] == '1'){
                ans = ans+ "1";
            }
            else if(str[i] == '0'){
                ans = "0"+ans;
            }
            

            if( i < j){
                if (str[j] == '0')
                {
                    ans = ans + "0";
                }
                else if (str[j] == '1')
                {
                    ans= "1"+ans;
                }
                j--;
             
            }
            i++;
        }
        cout << ans << endl;

    }
    return 0;
}