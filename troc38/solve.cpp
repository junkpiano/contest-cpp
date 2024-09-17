#include<iostream>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

#define voila ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define println(s) cout<<s<<endl
#define rep(s,i,n) for(int i=s;i<n;i++)
#define repstr(c,s) for(auto c: s)

void solve() {
    int x[7];
    for(int i=0; i<7; i++)cin>>x[i];
    int answer =x[0];
    for(int j=1; j<7; j++)
        if(x[j] >= 0)answer += x[j];
        else answer -= x[j];
    cout<<answer<<endl;
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
