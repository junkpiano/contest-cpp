#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

#define voila ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define println(s) cout<<s<<endl
#define rep(s,i,n) for(int i=s;i<n;i++)
#define repstr(c,s) for(auto c: s)

void solve() {
    string s, t;
    cin>>s>>t;
    vector<string> ans;
    int n = s.size();
    while(s!=t) {
        string nxt(n,'z');
        for(int i = 0; i < n; i++) {
            if(s[i] != t[i]) {
                string tmp = s;
                tmp[i] = t[i];
                nxt = min(nxt, tmp);
            }
        }

        ans.push_back(nxt);
        s = nxt;
    }

    cout<<ans.size()<<endl;
    for(auto &e: ans) cout<<e<<endl;
}

int main(){
    voila

#ifndef ONLINE_JUDGE
    // For getting input from input.txt file
    // freopen("input.txt", "r", stdin);
    // Printing the Output to output.txt file
    // freopen("output.txt", "w", stdout);
#endif

    int tt=1;
    // cin>>tt;
    while(tt--) solve();

    return 0;
}
