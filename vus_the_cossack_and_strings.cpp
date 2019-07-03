#include <bits/stdc++.h>
using namespace std;

int countSetBits(unsigned int n) 
{ 
unsigned int count = 0; 
while (n) 
{ 
    count += n & 1; 
    n >>= 1; 
} 
return count; 
} 

int main() {
    
    int i, len1, len2, value1, value2, tmp, ans = 0;
    string s1, s2;
    cin >> s1 >> s2;
    len1 = s1.size();
    len2 = s2.size();

    for(i = 0; i < len2; i++)
        if(s2[i] ==  '1')
            value2 += pow(2, i);

    for(i = 0; i < len1; i++)
        if(s1[i] ==  '1')
            value1 += pow(2, i);

    tmp = value1 ^ value2;
    if(countSetBits(tmp) % 2 == 0)
        ans++;
    for(i = len2; i < len1; i++) {
       
        value1 /= 2;
        if(s1[i] == '1')
            value1 += pow(2,len2 - 1);
        if(s1[i - 1] == '1')
            value1--;
        tmp = value1 ^ value2;
        
        if(countSetBits(tmp) % 2 == 0)
            ans++;
    }
    if(len2 == 1)
        cout << ans << "\n";
    else
        cout << ans + 1 << "\n";
    return 0;
}
