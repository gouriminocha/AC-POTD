#include <bits/stdc++.h>
using namespace std;
bool isprime(int j){
	if(j==2){
		return true;
	}
	for(int k=2;k<j;k++){
		if(j%k==0){
			return false;
		}
	}return true;
}
int main() {
	int n;
	cin>>n;
	int c;
	int count=0;
	for(int i=1;i<=n;i++){
		c=0;
		for(int j=2;j<i;j++){
			if(i%j==0 && isprime(j)){
				c++;
			}
		}if(c==2){
			count++;
		}
	}cout<<count;
	return 0;
}