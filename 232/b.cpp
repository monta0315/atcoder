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
	string s,t;
	cin>>s>>t;
	vector<int>s_t;
	rep(i,s.length()){
		s_t.push_back(abs(ctoi(s.at(i))-ctoi(t.at(i))));
	}
	bool ans = true;
	int base = s_t.at(0);
	for(int i=1;i<s_t.size();i++){
		if(base!=s_t.at(i)||base!=s_t.at(i)+26){
			ans = false;
		}
	}
	if(ans){
		out("Yes");
	}else{
		out("No");
	}
}