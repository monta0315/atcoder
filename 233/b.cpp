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
int main(){
    int l,r;
    string s;
    cin>>l>>r>>s;
    vector<char>a,b;
    rep(i,s.length()){
        if(i<r&&i>=l-1){
            a.push_back(s.at(i));
        }
    }
    rev(a);
    rep(i,s.length()){
        if(i<r&&i>=l-1){
            cout<<a.at(i-l+1);
        }else{
            cout<<s.at(i);
        }
    }
    out("");
}