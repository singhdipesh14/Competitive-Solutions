#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int lena = a.size()-1;
        int lenb = b.size()-1;
        int carry = 0;
        string res = "";
        while(1){
            int aa, bb;
            if(lena < 0 && lenb < 0){
                break;
            }
            
            if(lena < 0){
                aa = 0;
            }
            else{
                aa = (int)(a[lena] - '0');
            }
            if(lenb < 0){
                bb = 0;
            }
            else{
                bb = (int)(b[lenb] - '0');
            }
            int sum = aa + bb + carry;
            carry = sum / 2;
            int add = sum % 2;
            cout << aa << '\t' << bb << '\t' << add << '\t'<< carry << endl;
            res+=to_string(add);
            lena--;
            lenb--;
        }
        if(carry){
            cout << "adding final" << endl;
            res+='1';
        }
        string ans;
        for(int i = res.size()-1; i>=0;i--){
            //cout << res[i] << endl;
            ans+=res[i];
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    string ans = sol.addBinary("0", "0");
    cout << ans << endl;
    return 0;
}