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

int n,x,y,a,b;

void inp(){
    cin >> n >> x >> y >> a >> b;
}

void solve(){
    if(x==y-1)
    {
        if(max(1ll,x-a)<y-b-1) cout<<"Kiaya"<<endl;
        else cout<<"Zeros"<<endl;
    }
    else if(x+a>=y-1)
    {
        if(min(n,y+b)<=y+a) cout<<"Kiaya"<<endl;
        else cout<<"Zeros"<<endl;
    }
    else
    {
        if(a==b)
        {
            if((y-x-1)%(a+1)) cout<<"Kiaya"<<endl;
            else cout<<"Zeros"<<endl;
            return;
        }
        if(a>b) cout<<"Kiaya"<<endl;
        else cout<<"Zeros"<<endl;
    }
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
