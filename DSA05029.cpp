/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
bool check(string s, int i) {
    return (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6'));
}
void Process(){
   string s;
		cin >> s;
		s = ' ' + s;
		int n = s.size(), k;
		int a[n];
		a[0] = a[1] = 1;
		if (s[1] == '0'){
			cout << 0 << '\n';
			return;
		}
		for (int i = 2; i < n; i++)
		{
			if (s[i] == '0')
			{
				if (s[i - 1] > '2')
				{
					a[n - 1] = 0;
					break;
				}
				a[i] = 0;
			}
			else
				a[i] = a[i - 1];
			k = (s[i - 1] - '0') * 10 + s[i] - '0';
			if (k <= 26 && k >= 10)
				a[i] += a[i - 2];
		}
		cout << a[n - 1] << '\n';
}
int main(){
    Faster();
    int t; cin >> t;
    while(t--)
        Process();
}
    