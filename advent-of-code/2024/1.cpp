#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<string> split(const string& str, const string& delimiter) {
    vector<string> tokens;
    size_t pos = 0;
    string token;
    string s = str;
    while ((pos = s.find(delimiter)) != string::npos) {
        token = s.substr(0, pos);
        if(token != "") tokens.push_back(token);
        s = s.substr(pos + delimiter.length());
    }

    if(s != "") tokens.push_back(s);

    return tokens;
}

int main() {
  vector<int> l, r;
  
  while(1) {
    string s;
    getline(cin, s);
    if(s == "") break;

    vector<string> v = split(s, " ");
    l.push_back(stoi(v[0]));
    r.push_back(stoi(v[1]));
  }

  sort(l.begin(), l.end());
  sort(r.begin(), r.end());

  long long ans = 0;

  for(int i = 0; i < l.size(); i++) {
    ans += abs(l[i] - r[i]);
  }

    cout << ans << endl;
    return 0;
}
