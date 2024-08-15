#include <bits/stdc++.h>
#include <climits>

#define ll long long
#define str string
#define fori_n for(int i = 0; i < n; i++)
#define forj_m for(int j = 0; j < m; j++)
#define forj_n for(int j = 0; j < n; j++)
#define fori_m for (int i = 0; i < m; i++)
#define pb push_back
#define pai pair<int, int>
#define pal pair<long long, long long>
#define vei vector<int>
#define forvec for (auto to: vec)
#define printvec for (auto to: vec)cout << to << ' '
#define forstrs for (char c: s)
#define ldouble long double
#define mapii map<int, int>
#define mapll map<long long, long long>
#define mapsi map<string, int>
#define mapsi map<string, long long>
#define printarr for(int i = 0;i < n; i++)cout << arr[i]
#define cinarr for (int i = 0; i < n; i++)cin >> arr[i]
#define alls a.begin(), s.end()
#define allvec vec.begin(), vec.end()
#define allarr arr, arr + n
using namespace std;

const int INF_int = INT_MAX;
const ll INF_ll = LLONG_MAX;

//const int N = 1e5 + 1;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("pobeda.in", "r", stdin);
    freopen("pobeda.out", "w", stdout);


    ll a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];

    ll squares = min(a[0], a[1]) + min(a[2], a[3]);
    ll sqr = sqrt(squares);
    cout << sqr;

    return 0;
}

