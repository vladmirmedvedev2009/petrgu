#include <bits/stdc++.h>

#define ll long long
#define str string
#define fori_n for(int i = 0; i < n; i++)
#define forj_m for(int j = 0; j < m; j++)
#define forj_n for(int j = 0; j < n; j++)
#define pb push_back
#define pai pair<int, int>
#define vei vector<int>
using namespace std;


bool func(vector<int> v1, vector<int> v2)
{
    for (int i = 0; i < v1.size(); i++){
        for (int j = 0; j < v2.size(); j++){
            if (v1[i] == v2[j])
                return true;
        }
    }
    return false;
}


void factorize(vector<int> &v, int n)
{
    int div = 2;
    while (n != 1){
        if (n % div == 0){
            n /= div;
            v.pb(div);
        }
        else if (v.empty() && div * div > n){
            v.pb(n);
            return;
        }
        else div++;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);

    int n;
    cin >> n;
    vector<int> arr[n];
    int x;
    fori_n{
        cin >> x;
        factorize(arr[i], x);
    }

    int dp[n];
    dp[0] = 1;
    for (int k = 1; k < n; k++){
        dp[k] = 1;
        for (int i = 0; i < k; i++){
            if (func(arr[i], arr[k]))
                dp[k] = max(dp[k], dp[i] + 1);
        }
    }
    int m = 0;
    for (int i = 0; i < n; i++)
        m = max(m, dp[i]);
    cout << m;



    return 0;
}

