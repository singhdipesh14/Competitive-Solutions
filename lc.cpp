#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool check(string haystack, string needle, int start){
        //cout << "we checked" << endl;
        for(int i =0; i<needle.size();i++){
            if(haystack[start++]!=needle[i]){
                return false;
            }
        }
        return true;
    }
    
    int strStr(string haystack, string needle) {
        bool ans = false;
        int pos;
        for(int i=0; i<haystack.size();i++){
            if(haystack[i]==needle[0]){
                if(check(haystack, needle, i)){
                    ans = true;
                    pos = i;
                    break;
                }
            }
        }
        if(ans){
            return pos;
        }
        return -1;
    }
};

int main()
{
    string s = "hello";
    string y = "ll";
    Solution sol;
    int ans = sol.strStr(s, y);
    cout << ans << endl;
    return 0;
}