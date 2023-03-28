/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5; 
long long meger(int a[], int l , int r , int m){
    vector<int>x(a + l , a + m + 1);
    vector<int>y(a + m + 1 , a + r + 1);
    int i = 0 , j = 0 ;
    long long count = 0;
    while(i < x.size() && j < y.size()){
        if(x[i] <= y[j]){
            a[l++] = x[i++];
        }
        else{
            count += (x.size() - i);
            a[l++] = y[j++];
        }
    }
    while(i < x.size()) a[l++] = x[i++];
    while(j < y.size()) a[l++] = y[j++];
    return count;
}
long long megerSort(int a[], int l , int r){
    long long res = 0;
    if(l < r){
        int m = (l + r) / 2;
        res += megerSort(a , l , m);
        res += megerSort(a , m + 1 , r);
        res += meger(a , l , r , m);
    }
    return res;
}
void Process(){
    int n ; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    cout << megerSort(a , 0 , n - 1) << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    