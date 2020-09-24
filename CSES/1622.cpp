#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
using namespace std;

ll fact(ll n)
{
    ll ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

void permutate(string prefix, string suffix, set<string> &permutations)
{
    if (suffix.length() == 0)
    {
        permutations.insert(prefix);
        return;
    }
    for (int i = 0; i < suffix.length(); i++)
    {
        permutate(prefix + suffix[i], suffix.substr(0, i) + suffix.substr(i + 1), permutations);
    }
}

void func()
{
    string s;
    getline(cin, s);
    set<string> permutations;
    permutate("", s, permutations);
    cout << permutations.size() << '\n';
    for (auto ele : permutations)
    {
        cout << ele << '\n';
    }
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
