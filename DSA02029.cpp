/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n; 
void Tower(int n , char start , char mid, char end){
    if(n == 1){
        cout << start << " -> " << end << '\n';
        return;
    }
    Tower(n - 1, start, end, mid);
    Tower(1 , start , mid , end);
    Tower(n - 1, mid, start , end);
}
void Process(){
    cin >> n;
    Tower(n, 'A', 'B', 'C');
    // B1: Chuyen n - 1 cot tu A -> B su dung C lam trung gian
    // B2: Chuyen 1 cot lon nhat tu A -> C
    // B3: Chuyen n - 1 cot o cot B -> C su dung A lam trung gian
}
int main(){
    Faster();
    // int t; cin >> t;
    // while(t--)
        Process();
}
    