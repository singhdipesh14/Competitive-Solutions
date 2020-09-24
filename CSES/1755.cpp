#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
using namespace std;

void func()
{
    string s;
    getline(cin, s);
    int a[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        a[s[i] - 'A']++;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] % 2 == 1)
        {
            cnt++;
        }
        if (cnt > 1)
        {
            cout << "NO SOLUTION\n";
            return;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] % 2 == 0)
        {
            for (int j = 0; j < a[i] / 2; j++)
            {
                cout << (char)(i + 'A');
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] % 2 == 1)
        {
            for (int j = 0; j < a[i]; j++)
            {
                cout << (char)(i + 'A');
            }
        }
    }
    for (int i = 25; i >= 0; i--)
    {
        if (a[i] % 2 == 0)
        {
            for (int j = 0; j < a[i] / 2; j++)
            {
                cout << (char)(i + 'A');
            }
        }
    }
    cout << endl;
}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // int test;
    // cin >> test;
    // //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // while (test--)
    {
        func();
    }
    return 0;
}
