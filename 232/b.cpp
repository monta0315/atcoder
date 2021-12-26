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
	string s,t;
	cin>>s>>t;
	vector<int>a,b;
	rep(i,s.length()){
		a.push_back(int(ctoi(s.at(i))));
		b.push_back(int(ctoi(t.at(i))));
	}
	int base = (b.at(0)-a.at(0)+26)%26;
	bool ans = true;
	rep(i,a.size()){
		if((b.at(i)-a.at(i)+26)%26!=base){
				ans = false;
		}
	}
	if(ans){
		out("Yes");
	}else{
		out("No");
	}
}
//sとtの文字列をアスキーコードに変換してそれをintにする
//どれくらいずれているかで、49=>52d 74=>51c => -26してプラスするのとそのまま足すの判定をしてあげる