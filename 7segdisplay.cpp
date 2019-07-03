#include <bits/stdc++.h>
using namespace std;

int main() {
        int numbers[10] = {6, 2, 5, 5, 4, 5, 7, 3, 7, 6}, count = 0, T;
        string N;
        unsigned int i = 0;
        int result [17] = {-1, -1, 1, 7, 11, 71, 111, 711, 1111, 7111, 11111, 71111, 111111, 711111, 1111111, 7111111, 11111111};
        cin >> T;
        while(T--) {
	       cin >> N;

	       cout << N << endl;
	       do{
		      count += numbers[(int)N[i++] % 10];
	       }while(i < N.size());
	       cout << result[count] << endl;
	       count = 0;
	       i = 0;
        }
        cout << endl;
        return 0;
}
