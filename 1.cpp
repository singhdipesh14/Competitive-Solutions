#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
using namespace std;

void func()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll &d : a)
    {
        cin >> d;
    }
    ll first = 0, second = 0;
    for(int i =0; i<n; i++){
        if(first>second){
            second+=a[i];
        }
        else{
            first+=a[i];
        }
    }
    cout << abs(second - first) << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int test;
    // cin >> test;
    // //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // while (test--)
    {
        func();
    }
    return 0;
}
