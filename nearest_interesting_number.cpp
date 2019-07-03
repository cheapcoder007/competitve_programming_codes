#include <bits/stdc++.h>
using namespace std;

int findsum(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n, sum;

    cin >> n;
    while(true) {
        sum = findsum(n); 
        if(sum % 4 == 0) {
            cout << n << "\n";
            return 0;
        }
        else n++;
    }
    return 0;
}
