#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, m, k, ans;
    cin >> n >> m >> k;

    ans = min(m, k);
    if(ans >= n)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
