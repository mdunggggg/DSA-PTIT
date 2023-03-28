/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    long long tu , mau ; cin >> tu >> mau;
    while(true)
    {
        if(mau % tu == 0)
        {
            cout << 1 << "/" << mau / tu ;
            break;
        }
        long long res = mau / tu + 1;    
        cout << 1 << "/" << res << " + ";
        tu = tu * res - mau;
        mau = res * mau; 
    }
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    