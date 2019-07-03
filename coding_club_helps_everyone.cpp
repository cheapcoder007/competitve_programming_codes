#include <bits/stdc++.h>
using namespace std;

int main() {
        
        long long n, sum = 0, i = 1, j, digits = 0, tmp, total = 0;
        cin >> n;
        tmp = n;
        if(n < 10) {
	       cout << n << endl;
	       return 0;
        }
        for(digits = 0; tmp; digits++) tmp /= 10;

        tmp = 9;
        for(j = 0; j < digits - 1; j++) {
	       sum += i * tmp;
	       i++;
	       total += tmp;
	       tmp *= 10;
        }
        n -= total;
        sum += n * i;
        cout << sum << endl;
        return 0;
}
