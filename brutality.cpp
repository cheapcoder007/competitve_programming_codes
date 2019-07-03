#include <bits/stdc++.h>
using namespace std;

unsigned long long int n, k, j, i, sum, l, f, tmp, e;
string str;
vector < int > vec;
void func(); 
int main() {
       cin >> n >> k;
        for(i = 0; i < n; i++) {
	       cin >> tmp;
	       vec.push_back(tmp);
			     
        }
        cin >> str;
        i = 0;
        for(;i <=  n - 1;) {

	       if(str[i] == str[i + 1]) {
		      func();
		      if((l - i + 1) < k) {
			     for(j = i; j <= l; j++)
				    sum += vec[j];
		      }
		      else {
			     sort(vec.begin() + i, vec.begin() + l + 1);
			     tmp = k;
			     for(f = l; tmp--; f--)
				    sum += vec[f];
		      }
		      i = l + 1;
	       }
	       else
		      sum += vec[i++];
        }
        cout << sum << endl;
        return 0;
}


void func() {
        for(l = i;l < n - 1;l++) {
	       if(str[l] != str[l + 1])
		      break;
        }
}
