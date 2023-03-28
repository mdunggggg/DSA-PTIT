/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
int n;
void Try(string s)
{
    int k = s.size();
    if (n == k)
    {
        if (s[n - 1] == '6')
            cout << s << endl;
        return;
    }
    if (s[k - 1] == '8')
        Try(s + "6");
    else
    {
        if (k < 4)
            Try(s + "6");
        else if (s[k - 2] == '8' || s[k - 3] == '8')
            Try(s + "6");
        Try(s + "8");
    }
}
void Process(){
    cin >> n;
    Try("8");
}
int main(){
    Faster();
    // int t; cin >> t;
    // while(t--)
        Process();
}
    