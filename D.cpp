#include<bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i = (a), _b = (b); i <= _b; i++)
#define FORD(i, a, b) for(int i = (a), _b = (b); i >= _b; i--)

#define bit(i, x) (((x) >> (i)) & (1))
#define ll long long
#define int ll
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define endl '\n'

const ll oo = 1e18l + 7;
const int inf = 1e9 + 9;
const int M = 5e5 + 6;
const int N = 2e5 + 6;
const int LOG = 31 - __builtin_clz(N);

#define _ << " " <<
#define __ << "\n"
#define ___ << " "

template<typename T> bool maxi(T &a, T b){ if(a < b) a = b; else return 0; return 1; }
template<typename T> bool mini(T &a, T b){ if(a > b) a = b; else return 0; return 1; }

const int maxn = 1e6 + 7;
int child[maxn], par[maxn];
bool vis[maxn];
int n, a[maxn];
set<int> block;
const int mod = 998244353;

void init(int n) {
    FOR(i, 1, n * 3) {
        par[i] = i;
        child[i] = 1;
    }
}

int tim(int u) {
    return (u == par[u] ? u : par[u] = tim(par[u]));
}

void merge(int u, int v) {
    int a = tim(u);
    int b = tim(v);
    if (a == b) return;
    if (child[a] < child[b]) swap(a, b);
    par[b] = a;
    child[a] += child[b];
}

void inp(){

}
    vector<int> val;

void solve(){
    cin >> n;

    init(n);
    FOR(i, 1, n) {
        cin >> a[i];
        val.pb(a[i]);
        val.pb(a[i] + 1);
        if (a[i] - 1 != 0) val.pb(a[i] - 1);
    }

    sort(all(val));
    val.erase(unique(all(val)), val.end());

    FOR(i, 1, n) {
        a[i] = lower_bound(all(val), a[i]) - val.begin() + 1;
//        cout << a[i] ___ ;
        if (vis[a[i] - 1] == 1) merge(a[i], a[i] - 1);
        if (vis[a[i] + 1] == 1) merge(a[i], a[i] + 1);
        vis[a[i]] = 1;
    }
//    cout __ ;

//    FOR(i, 1, n) cout << par[i] ___ ; cout __ ;

    int ans = 1;
    bool ok = false;
    FOR(i, 1, n) {
        if (block.find(tim(a[i])) == block.end()) {
            int x = child[tim(a[i])];
//            cout << a[i] _ x __ ;
            ok |= (x >= 2);
            if (x % 2 == 1) {
                ans *= (x + 1) / 2;
                ans %= mod;
            }
            block.insert(tim(a[i]));
        }
    }
    cout << ans __ ;


    block.clear();
    val.clear();
    FOR(i, 1, n * 3) {
        vis[a[i]] = 0;
        par[i] = i;
        child[i] = 1;
    }
//    FOR(i, 1, n) cout << child[find(a[i])] ___ ; cout __ ;
}


main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    if(fopen("test.inp", "r")){
        freopen("test.inp", "r", stdin);
        freopen("test.out", "w", stdout);
    }

    int test = 1;
    cin >> test;

    while(test--){
        inp();
        solve();
    }

    cerr << "Time elapsed: " << clock() * 1.0 / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
