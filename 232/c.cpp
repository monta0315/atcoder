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

int n,m;
vector<int>a,b,c,d;


int main(){
    cin>>n>>m;
    a.resize(m);
    b.resize(m);
    c.resize(m);
    d.resize(m);
    rep(i,m){
        cin>>a.at(i)>>b.at(i);
    }
    rep(i,m){
        cin>>c.at(i)>>d.at(i);
    }

    vector<vector<bool>>ta(n,vector<bool>(n));
    vector<vector<bool>>ao(n,vector<bool>(n));
    rep(i,m){
        ta.at(a.at(i)-1).at(b.at(i)-1) = ta.at(b.at(i)-1).at(a.at(i)-1) = true;
        ao.at(c.at(i)-1).at(d.at(i)-1) = ao.at(d.at(i)-1).at(c.at(i)-1) = true;
    }
    vector<int>p(n);
    iota(p.begin(),p.end(),0);
    do{
        bool ok = true;
        rep(i,n){
            rep(j,n){
                if(ta.at(i).at(j) != ao.at(p.at(i)).at(p.at(j))){
                    ok = false;
                }
            }
        }
        if(ok){
            out("Yes");
            return 0;
        }
    }while(next_permutation(p.begin(),p.end()));
    out("No");
}
//順列を作ってその通りのPそれらをPとして題意を満たすかチェック
//1 順列作成　2作成した準列に対して評価関数を作成 3それを再帰関数などで再起的に評価できるか実装