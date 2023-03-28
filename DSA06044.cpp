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
	int a[n];
	vector<int> even, odd;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (i % 2 == 0)
			even.push_back(a[i]);
		else
			odd.push_back(a[i]);
	}
    int i1 = 0, i2 = 0;
	sort(even.begin(), even.end());
	sort(odd.rbegin(), odd.rend());
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			cout << even[i1++] << " ";
		else
			cout << odd[i2++] << " ";
	}

}
int main(){
    Faster();
        Process();
}
    