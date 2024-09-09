#include <bits/stdc++.h>
using namespace std;


// count digit !! 
int main() {
	// int n;
	// cin >> n ;
	// int cnt = 0 ;
	// while (n>0){
	// 	cnt = cnt + 1;
	// 	n = n/10;
	// }
	// cout << cnt ;

	long long  n ;
	cin >> n ;
	int cnt = (int)(log10(n) +1);
	cout << cnt;

	return 0;
}
