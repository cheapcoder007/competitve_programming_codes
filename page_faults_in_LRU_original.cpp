#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans, T, n, tmp, i, j, capacity; 
    cin >> T;
    while(T--) {
        cin >> n;
        ans = 0;
        vector < int > vec;
        for(i = 0; i < n; i++) {
                cin >> tmp;
                vec.push_back(tmp);
        }

        cin >> capacity;
        vector < int >:: iterator it;
        vector < int > working, visited(1001, 0);
        ans += capacity;
        for(i = 0; i < capacity; i++) {
                visited[vec[i]] = 1;
                working.push_back(vec[i]);
        }
        i = 0;
        for(j = capacity; j < n; j++) {
                if(!visited[vec[j]]) {
                    visited[vec[j]] = 1;
                    visited[working[i]] = 0;
                    working[i] = vec[j];
                    i = (i + 1) % capacity;
                    ans++;
                }
                else {
                    it = find(working.begin(), working.end(), vec[j]);
                    i = (it - vec.begin() + 1) % capacity;
                }
        }
        cout << ans << "\n";
    }
    return 0;
}

                



