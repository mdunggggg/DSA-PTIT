/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e3 + 5;
vector<int>prime;
int isPrime[MAX+1];
vector<int>cur;
vector<vector<int>>res;

void sieve() {
    isPrime[0] = 1;
    isPrime[1] = 1;
    for(int i = 2; i <= sqrt(MAX); ++i) {
         if(isPrime[i] == 0) {
             for(int j = i * i; j <= MAX; j += i)
                 isPrime[j] = 1;
        }
    }
    for(int i = 2 ; i <= MAX ; ++i){
        if(!isPrime[i]){
            prime.emplace_back(i);
        }
    }
}
int n , p , s, len;
void Try(int pos, int count, int sum){
    if(count > n || sum > s) return;
    if(count == n && sum != s) return;
    if(count == n && sum == s){
        res.push_back(cur);  
        return;
    }
  
    for(int i = pos ; i < len; ++i){
        if(sum + prime[i] <= s){
            cur.push_back(prime[i]);
            Try(i + 1, count + 1, sum + prime[i]);
            cur.pop_back();
        }
      
    }
}
void Process(){
    cin >> n >> p >> s;
    int i = 0;
    while(p >= prime[i]){
        ++i;
    }
    res.clear();
    cur.clear();
    Try(i , 0 , 0);
    cout << res.size() << '\n';
    sort(res.begin(), res.end(), [](vector<int>a , vector<int>b){
        string x = "", y = "";
        for(int i : a){
            x += to_string(i);
        }
        for(int i : b){
            y += to_string(i);
        }
        return x + y < y + x;
    });
    for(int i = 0 ; i < res.size(); ++i){
        for(int j = 0 ; j < res[i].size() ; ++j){
            cout << res[i][j] << ' ';
        }
        cout << '\n';
    }
}
int main(){
    Faster();
    sieve();
    len = prime.size();
    int t; cin >> t;
    while(t--)
        Process();
}
    