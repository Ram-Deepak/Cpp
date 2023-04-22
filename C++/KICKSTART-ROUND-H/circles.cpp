#include<bits/stdc++.h>

using namespace std;

int main(){
	int t, i=1;
	cin >> t;
	while(i<=t){
		long long l;
		int n;
		char direction;
		cin >> l >> n;
		int count=0, d=0;
		for(int i=0; i<n; i++){
			int di;
			char ci;
			cin >> di >> ci;
			if(i==0){
				direction = ci;
			}
			d += di;
			if(d>l && ci==direction){
				count++;
				d = d - l;
			}
			else
				d = l - d;
			direction = ci;
		}
		if(d>l){
			while(d){
				count++;
				d/=l;
			}
		}
		cout << "Case #" << i << ": " << count << endl;
		i++;
	}
}