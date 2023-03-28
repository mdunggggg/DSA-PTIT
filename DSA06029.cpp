/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n;
	cin >> n;
	int b = n - 1;
	vector<int> a(n);
	stack<vector<int>> st;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		int k = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > k)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = k;
		st.push(a);
	}
	while (st.size())
	{
		a = st.top();
		st.pop();
		cout << "Buoc " << b-- << ": ";
		for (int j = 0; j <= b + 1; j++)
			cout << a[j] << " ";
		cout << "\n";
	}
}
int main(){
    Faster();
        Process();
}
    