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
#define debag1v(h) for(auto i:h)out(i);
#define debag2v(h) rep(i,h.size()){for(auto c:h.at(i)){cout<<c;}out(' ');};
//for(int tmp =0;tmp<(1<<ex.length()-1);tmp++){bitset<num>b(tmp)}for(int i=0;i<ex.length()-1;i++){if(b.test(i)){}
int main(){
    ll n,a,b,p,q,r,s;
    cin>>n>>a>>b>>p>>q>>r>>s;
    vector<vector<char>>field(q-p+1,vector<char>(s-r+1,'.'));
    ll first_loop_start = max(1-a,1-b);
    ll first_loop_end = min(n-a,n-b);
    ll second_loop_first = max(1-a,b-n);
    ll second_loop_end = min(n-a,b-1);
/*     for(ll k=first_loop_start;k<=first_loop_end;k++){
        if(a+k-1>=p-1&&a+k-1<q&&b+k-1<s&&b+k-1>=r-1){
            field.at(a+k-p).at(b+k-r) = '#';
        }
    } */
    for(ll k=abs(p-a);k<abs(q-a+1);k++){
        for(ll j=abs(r-b);j<abs(s-b+1);j++){
            field.at(a+k-p).at(b+k-r) = '#';
        }
    }
/*     for(ll k=second_loop_first;k<=second_loop_end;k++){
        if(a+k-1>=p-1&&a+k-1<q&&b-k-1<s&&b-k-1>=r-1){
            field.at(a+k-p).at(b-k-r) = '#';
        }
    } */
/*     for(ll k=p-a;k<q-a+1;k++){
        for(ll j=b-r;j<b-s-1;j++){
            field.at(a+k-p).at(b-k-r) = '#';
        }
    } */
    debag2v(field);
}