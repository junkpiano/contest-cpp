#include <iostream>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

#define voila ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define println(s) cout<<s<<endl
#define rep(s,i,n) for(int i=s;i<n;i++)
#define repstr(c,s) for(auto c: s)

void solve() {
    int L, R;
    cin >> L >> R;

    if(L==1&&R==0) println("Yes");
    else if(L==0&&R==1) println("No");
    else println("Invalid");
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
