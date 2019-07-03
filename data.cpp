//magic sum of magic square of size n * n = n * (n ^ 2 + 1 ) / 2;

#include <bits/stdc++.h>
using namespace std;

int find_cost(vector < int > );
int main() {

        int n;
        vector<vector<int> > arr(3, vector<int> (3, 0));

        for(int i = 0; i < 3; i++) {
	       for(int j = 0; j < 3; j++) {
		      cin >> n;
		      arr[i][j] = n;
	       }
        }


        for(int i = 0; i < 3; i++) {
	       for(int j = 0; j < 3; j++) {
		      cout << arr[i][j] << " ";
	       }
	       cout << endl;
        }







        return 0;
}


