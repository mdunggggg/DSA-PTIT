/*  Hoang Manh Dung - D21 ProPTIT  */
#include<bits/stdc++.h>
using namespace std;
#define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double PI = 2 * acos(0);
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;
void Process(){
    int n, b;
    cin >> n;
    vector<int> a(n);
    stack<vector<int>> st;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        bool k = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                k = true;
            }
        }
        if (k == false)
            break;
        st.push(a);
    }
    b = st.size();
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
    int t; cin >> t;
    while(t--)
        Process();
}
    