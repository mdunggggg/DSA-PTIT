/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n, a[100];
vector<int>cur;
vector<vector<int>>v;
void Try(int i){
    for(int j = i ; j <= n; ++j){
        if(a[j] >= a[i - 1]){
            cur.push_back(a[j]);
            if(cur.size() > 1)
                v.push_back(cur);
            Try(j + 1);
            cur.pop_back();
        }
    }
}
void Process(){
    cin >> n;
    for(int i = 1 ; i <= n ; ++i)
        cin >> a[i];
    Try(1);
    sort(v.begin(), v.end(), [](vector<int>a , vector<int>b){
        string x = "", y = "";
        for(int it : a)
            x += to_string(it) + " ";
        for(int it : b){
            y += to_string(it) + " ";
        }
        return x < y;
    });
    for(auto it : v){
        for(int x : it) 
            cout << x << ' ';
        cout << '\n';
    }
}
int main(){
    Faster();
    // int t; cin >> t;
    // while(t--)
        Process();
}
    