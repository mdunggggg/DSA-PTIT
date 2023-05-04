/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    sort(a , a + n);
    int sum = 0;
    queue<int>q0, q1, q2;
    for(int x : a){
        sum += x;
        if(x % 3 == 0){
            q0.push(x);
        }
        else if(x % 3 == 1){
            q1.push(x);
        }
        else q2.push(x);
    }
    if(sum % 3 == 1){
        if(q1.empty()){
            if(!q2.empty()){
                q2.pop();
            }
            else{
                cout << "-1\n";
                return;
            }
            if(!q2.empty()){
                q2.pop();
            }
            else{
                cout << "-1\n";
                return;
            }
        }
        else q1.pop();
    }
    else if(sum % 3 == 2){
        if(q2.empty()){
            if(!q1.empty()){
                q1.pop();
            }
            else{
                cout << "-1\n";
                return;
            }
            if(!q1.empty()){
                q1.pop();
            }
            else{
                cout << "-1\n";
                return;
            }
        }
        else q2.pop();
    }
    vector<int>v;
    while(!q0.empty()){
        v.emplace_back(q0.front());
        q0.pop();
    }
    while(!q1.empty()){
        v.emplace_back(q1.front());
        q1.pop();
    }
    while(!q2.empty()){
        v.emplace_back(q2.front());
        q2.pop();
    }
    sort(v.rbegin(), v.rend());
    if(v.size() == 0) cout << "-1\n";
    else if(v[0] == 0) cout << "0\n";
    else{
        for(int x : v){
            cout << x;
        }
        cout << '\n';
        return;
    }
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    