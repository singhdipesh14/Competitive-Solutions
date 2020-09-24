#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
using namespace std;

void func()
{
    int a, b;
    cin >> a >> b;
    if(a==0 && b == 0){
        cout << "YES\n";
        return;
    }
    else if(a==0 || b == 0){
        cout << "NO\n";
        return;
    }
    else if(a == b){
                if((a+b)%3==0){
                    cout << "YES\n";
                    return;
                }
                else{
                    cout << "NO\n";
                    return;
                }
            }
    else{
        while(a >= 0 && b >= 0){
            if(a==0 && b!=0){
                cout << "NO\n";
                return;
            }
            else if(a!=0 && b==0){
                cout << "NO\n";
                return;
            }
            int ans = (a<b)?1:0;
            if(ans){
                a-=1;
                b-=2;
            }
            if(ans == 0){
                a-=2;
                b-=1;
            }
        }
        cout << "YES\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (test--)
    {
        func();
    }
    return 0;
}
