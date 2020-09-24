#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
using namespace std;

void func()
{
    int n;
    cin >> n;
    int mod = 5;
    int cnt = 0;
    while(n/mod!=0){
        cnt += n/mod;
        mod *=5;
    }
    cout << cnt << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (test--)
    {
        func();
    }
    return 0;
}
