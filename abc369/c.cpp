#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

#define voila ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define println(s) cout<<s<<endl
#define rep(s,i,n) for(int i=s;i<n;i++)
#define repstr(c,s) for(auto c: s)

ll f(ll n) { return n * (n + 1)/2; }

void solve() {
  int n;
  cin >> n;
  vector<int> A(n);
  int pre = 0;
  ll cnt = n;

  for(int &i: A) {
    cin >> i;
  }

  for(int i = 1; i < n - 1; i++) {
    if(A[i] - A[i - 1] != A[i + 1] - A[i]) {
      cnt += f(i - pre);
      pre = i;
    }
  }
  
  cnt += f(n - 1 - pre);
  println(cnt);
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
