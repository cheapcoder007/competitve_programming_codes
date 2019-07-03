#include <bits/stdc++.h>
using namespace std;

void ini(int *arr, int n) {
        int i;
        for(i = 1; i < n + 1; i++)
	       arr[i] = 0;
}

int main() {
        int n, i, j, tmp;
        cin >> n;
        int arr[n + 1], visited[n + 1];
        ini(visited, n);
        for(i = 1; i < n + 1; i++)
	       cin >> arr[i];
        for(i = 1; i < n + 1; i++) {
	       tmp = arr[i];
	       visited[i] = 1;
	       for(j = 0; j < n + 1; j++) {
		      if(visited[tmp]) {
			     cout << tmp << " ";
			     ini(visited, n);
			     break;
		      }
		      visited[tmp] = 1;
		      tmp = arr[tmp];
	       }
        }
        return 0;
}
