#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int editDistance(string s, string t) {
        // Code here

        unordered_map<int,int> um;

    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}