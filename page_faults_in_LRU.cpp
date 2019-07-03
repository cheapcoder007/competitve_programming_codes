
#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans, T, n, tmp, i, j, capacity; 
    cin >> T;
    while(T--) {
        queue < int > q;
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
                q.push(vec[i]);
        }
        i = 0;
        for(j = capacity; j < n; j++) {
                if(!visited[vec[j]]) {
                    q.push(vec[j]);
                    while(true && !q.empty()) {
                        if(visited[q.front()] == 1) {
                            visited[q.front()]--;
                            q.pop();
                            break;
                        }
                        else {
                             visited[q.front()]--;
                             q.pop();
                        }
                    }
                    ans++;
                }
                else
                    q.push(vec[j]);
                visited[vec[j]]++;
        }
        cout << ans << "\n";
    }
    return 0;
}
