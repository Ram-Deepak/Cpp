#include <bits/stdc++.h>

using namespace std;

void printSubSeq(vector<int>& arr, vector<int>& seq, int i, int n){
	if(i==n){
		for(int k : seq){
			cout << k << " ";
		}
		cout << endl;
		return;
	}

	seq.push_back(arr[i]);
	printSubSeq(arr, seq, i+1, n);
	seq.pop_back();
	printSubSeq(arr, seq, i+1, n);
}

int main(){
	int n;
	cin >> n;
	vector<int> arr;
	for(int i=0; i<n; i++){
		int v;
		cin >> v;
		arr.push_back(v);
	}
	vector<int> seq;
	printSubSeq(arr, seq, 0, n);
	return 0;
}