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

int dp[200002];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);

    int n;
    cin >> n;
    int arr[n];
    fori_n cin >> arr[i];
    int res = 0;

    for (int i = 0; i < n; i++){
        int a = arr[i];
        int div = 2;
        set<int> st;

        while (a > 1){
            if (a % div == 0){
                st.insert(div);
                a /= div;
            }
            else if (div * div > a){
                st.insert(a);
                break;
            }
            else div++;
        }
        int mx = -1;
        for (auto c: st){
            if (dp[c] > mx){
                mx = dp[c];
            }
        }
        for (auto c: st)
            dp[c] = mx + 1;

        res = max(res, mx + 1);
    }
    cout << res;



    return 0;
}

