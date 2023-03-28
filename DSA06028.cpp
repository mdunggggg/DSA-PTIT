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
	for (int i = 0; i < n - 1; i++)
	{
		int k = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[k])
				k = j;
		swap(a[k], a[i]);
		st.push(a);
	}
	while (st.size())
	{
		a = st.top();
		st.pop();
		cout << "Buoc " << b-- << ": ";
		for (int j = 0; j < n; j++)
			cout << a[j] << " ";
		cout << "\n";
	}  
}
int main(){
    Faster();
        Process();
}
    