#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define fore(i,a) for(auto &a:a)
#define e(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define out(s) cout << s << endl
#define decimal10(s) cout << fixed << setprecision(10) << s << endl
#define twod(h, w) vector<vector<int>> v(h, vector<int>(w))
#define ctoi(c) c - '0'
#define getdigit(n) log10(n) + 1 //桁数
typedef long long ll;
const int MOD = 1000000007;
const long long INF = 1LL << 60;
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)}for(int i=0;i<ex.length()-1;i++){if(b.test(i)){}

ll n,x;
ll ans = 0;

void solve(vector<vector<ll>>&a,ll pos,ll seki){
    if(pos == n){
        if(seki==x){
            ans ++;
        }
        return;
    }
    for(ll c:a.at(pos)){
        if(seki>x/c)continue;
        solve(a,pos+1,seki*c);
    }
}

int main(){
    cin>>n>>x;
    vector<ll>l(n);
    vector<vector<ll>>a(n);
    rep(i,n){
        cin>>l.at(i);
        rep(j,l.at(i)){
            ll s;
            cin>>s;
            a.at(i).push_back(s);
        }
    }
    solve(a,0,1);
    out(ans);
}