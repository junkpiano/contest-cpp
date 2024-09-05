#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

#define voila ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define println(s) cout<<s<<endl
#define rep(s,i,n) for(int i=s;i<n;i++)
#define repstr(c,s) for(auto c: s)

void solve() {
  int n;
  cin >> n;
  vector<int> a, b;

  for(int i = 0; i < n; i++) {
    int k;
    char h;

    cin >> k >> h;

    if(h == 'L') {
      a.push_back(k);
    } else {
      b.push_back(k);
    }
  }

  ll ans = 0;
  for(int i = 1; i < a.size(); i++) {
    ans += abs(a[i] - a[i - 1]);
  }

  for(int j = 1; j < b.size(); j++) {
    ans += abs(b[j] - b[j - 1]);
  }

  println(ans);
}

int main(){
    voila

#ifndef ONLINE_JUDGE
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin);
    // Printing the Output to output.txt file 
    // freopen("output.txt", "w", stdout);
#endif

    int tt=1;
    // cin>>tt;
    while(tt--) solve();

    return 0;
}
