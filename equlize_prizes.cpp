#include <bits/stdc++.h>
using namespace std;

int main() {
    int q, n, k, tmp, lower = INT_MAX, upper = INT_MIN, i;
    cin >> q;
    while(q--) {
        cin >> n >> k;
        vector < int > vec(n);
        for(i = 0; i < n; i++) {
            cin >> tmp;
            vec.push_back(tmp);
            lower = min(lower, tmp);
            upper = max(upper, tmp);
        }
//        cout << lower << " " << upper << endl;
        lower = *min_element(vec.begin(), vec.end()); 
        upper = *max_element(vec.begin(), vec.end()); 
        lower += k;
        upper -= k;
        if(lower >= upper)
            cout << lower << "\n";
        else
            cout << "-1" << "\n";
        lower = INT_MAX;
        upper = INT_MIN;
    }
    return 0;
}

