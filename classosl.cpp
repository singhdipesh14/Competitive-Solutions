class Solution {
public:

    void rec(string&s, int k, int start, int end){
         while(start<end){
                char junk = s[start];
                s[start++]=s[end];
                s[end--]=junk;
            }
    }

    string reverseStr(string s, int k) {
        for(int itr= 0; itr<s.length(); itr+=2*k){
            int start = itr, end;
            if(itr+k-1<s.length()-1){
                end = itr+k-1;
            }
            else{
                end = s.length()-1;
            }
            rec(s, k, start, end);
        }
        return s;
    }
};