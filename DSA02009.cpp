    /*  Hoang Manh Dung - D21 ProPTIT  */
    #include<bits/stdc++.h>
    using namespace std;
    #define Faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    const double PI = 2 * acos(0);
    const int MOD = 1e9 + 7;
    const int MAX = 1e6 + 5;
    int n , k , a[25], vis[25], sum, ok;
    void Try(int summ, int count){
        if(ok) 
            return;
        if(count == k){
            ok = 1;
            return;
        }
        for(int j = 0 ; j < n ; ++j){
            if(!vis[j]){
                vis[j] = 1;
                if(summ == sum)
                    Try(0, count + 1);
                else if(summ + a[j] <= sum)
                    Try(summ + a[j], count);
                
            }
            vis[j] = 0;
        }
    }
    void Process(){
        cin >> n >> k;
        sum = 0;
        for(int i = 0 ; i < n ; ++i){
            cin >> a[i];
            sum += a[i];
            vis[i] = 0;
        }
        ok = 0;
        if(sum % k != 0){
            cout << 0 << '\n';
            return;
        }
        else{
            sum /= k;
            Try(0, 0);
            cout << ok << '\n';
        }
    

    }
    int main(){
        Faster();
        int t; cin >> t;
        while(t--)
            Process();
    }
        