#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, distance = 0, i, tmp;
    cin >> N;
    vector < int > vec;
    vec.push_back(0);
    for(i = 0; i < N; i++) {
        cin >> tmp;
        vec.push_back(tmp);
    }
    vec.push_back(0);
    for(i = 1; i <= N + 1; i++)
        distance += abs(vec[i] - vec[i - 1]);

    for(i = 1; i <= N; i++) {
        tmp = distance;
        tmp -= abs(vec[i] - vec[i - 1]) + abs(vec[i] - vec[i + 1]);
        tmp += abs(vec[i - 1] - vec[i + 1]);
        cout << tmp << "\n";
    }
    return 0;
}


