#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        if(n < 4) {
	       cout << "NO" << endl;
	       return 0;
        }
        else 
	       cout << "YES" << endl;
        if(n == 5) {
	       cout << "5 * 4 = 20\n" << "20 + 2 = 22\n" << "22 + 3 = 25\n" << "25 - 1 = 24" << endl;
	       return 0;
        }
        else if(n == 4) {
	       cout << "4 * 3 = 12\n" << "12 * 2 = 24\n" << "24 * 1 = 24\n";
	       return 0;
        }
        cout << "4 * 3 = 12\n" << "12 * 2 = 24\n" << "1 + 5 = 6\n" << "6 - 6 = 0\n";

        for(int i = 7; i < n; i++)
	       cout << "0 * " << i << " = 0\n";
        cout << "24 + 0 = 24" << endl;
        return 0;
}
