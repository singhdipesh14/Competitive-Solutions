#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    string rec(string n){
        int cnt = 0;
        string val = "";
        char c = n[0];
        for(int i = 0; i< n.size(); i++){
            if(c == n[i]){
                cnt++;
            }
            else{
                val+=(char)(cnt+'0');
                val+=c;
                cnt = 0;
                c = n[i];
                i--;
            }
        }
        return val;
    }
    
    string countAndSay(int n) {
        string base = "1"
        for(int i = 1; i<=n; i++){
            base = rec(base);
        }
        return base;
    }
};

int main()
{
    Solution sol;
    string ans = sol.countAndSay(4);
    cout << ans << endl;
    return 0;
}