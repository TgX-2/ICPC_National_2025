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

const int mod = 1e9 + 7;
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

int n;

void inp(){
    cin >> n;
}

void solve(){

    if (n == 1) {
        cout << "Uphold integrity and ethics throughout the contest.";
    } else if (n == 2) {
        cout << "Do not seek or receive external help from people, platforms, tools or AI.";
    } else if (n == 3) {
        cout << "Follow all ICPC rules and guidelines, accept decisions made by organizers and judges as final.";
    } else if (n == 4) {
        cout << "Show good sportmanship and treat competitors, volunteers, staff and judges with respect.";
    } else {
        cout << "Compete with creativity and teamwork, honor the contest spirit and pursue excellence.";
    }
}


main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    if(fopen("test.inp", "r")){
        freopen("test.inp", "r", stdin);
        freopen("test.out", "w", stdout);
    }

    int test = 1;
//    cin >> test;

    while(test--){
        inp();
        solve();
    }

    cerr << "Time elapsed: " << clock() * 1.0 / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
