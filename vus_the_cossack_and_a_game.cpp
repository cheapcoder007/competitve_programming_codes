#include <bits/stdc++.h>
using namespace std;


int cal(int n, int m) {
    int l, j, ans = 0;
    
    if(!(m % 3))
        l = m / 3;
    else
        l = m / 3 + 1;
    if(!(n % 2)) {
        j = n / 2;
        if(!(m % 3))
            ans += m / 3;
        else
            ans += m / 3 + 1;
    
    }
    else
        j = n / 2 + 1;
    ans += j * l; 
    return ans;
}

int main() {
    int n, m, val1, val2;
    cin >> n >> m;

    val1 = cal(n,m);
    val2 = cal(m,n);
    cout << max(val1, val2) << "\n";
    return 0;
}
