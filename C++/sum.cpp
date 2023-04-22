#include<bits/stdc++.h>

using namespace std;

int sumOf(vector<int> array)
{
    int sum=0;
    for(int num : array)
        sum ^= num;
    return sum;
}

int main(){
    int n;
    cin >> n;
    vector<int> array;
    for(int index=0; index<n; index++){
        int val;
        cin >> val;
        array.push_back(val);
    }
    cout << sumOf(array) << endl;
    return 0;
}
