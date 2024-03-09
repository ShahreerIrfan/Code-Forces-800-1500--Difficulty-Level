#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);

        int th;
        cin >> th;
        while (th--)
        {
                string s;
                cin >> s;
                int n = s.length();
                cout << s[0];
                for (int i = 1; i < n - 1; i += 2)
                         cout << s[i];
                cout << s[n - 1];
                cout << "\n";
        }
        return 0;

        // ......
}