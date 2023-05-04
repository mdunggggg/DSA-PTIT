/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
vector<int>inorder, preoder;
unordered_map<int,int>mp;
int pos, n;
void display(int l, int r){
    if(l <= r){
        int idx = mp[preoder[pos++]];
        display(l , idx - 1);
        display(idx + 1, r);
        cout << inorder[idx] << ' ';
    }
}
void Process(){
    cin >> n;
    mp.clear();
    inorder.resize(n);
    preoder.resize(n);
    for(int &x : inorder){
        cin >> x;
    }
    for(int &x : preoder){
        cin >> x;
    }
    for(int i = 0 ; i < n ; ++i){
        mp[inorder[i]] = i;
    }
    pos = 0;
    display(0, n - 1);
    cout << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    