#include <bits/stdc++.h>

using namespace std;

long long n, t = 0, i;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	scanf("%lld", &n);
	t = n;
	if(n%2 == 0){
		t /= 2;
	} else{
		t = (n-1)/2-n;
	}
	printf("%lld\n", t);
	return 0;
}
