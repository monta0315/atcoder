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
using ll = long long;
const int MOD = 1000000007;
const long long INF = 1LL << 60;
#define debag1v(h) for(auto i:h)out(i);
#define debag2v(h) rep(i,h.size()){for(auto c:h.at(i)){cout<<c;}out(' ');};
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)}for(int i=0;i<ex.length()-1;i++){if(b.test(i)){}
int main(){
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n);
    rep(i,n){
        cin>>a.at(i);
    }
    vector<ll>x(q);
    rep(i,q){
        cin>>x.at(i);
    }
    e(a);
    rep(i,q){
        ll itr =  lower_bound(a.begin(),a.end(),x.at(i)) - a.begin();
        out(n-itr);
    } 
}