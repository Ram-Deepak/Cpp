#include<bits/stdc++.h>

using namespace std;

int main(){
    multiset<int, greater<int>> mset;
    mset.insert(10);
    mset.insert(30);
    mset.insert(10);
    mset.insert(20);
    mset.insert(30);

    //iterator
    multiset<int, greater<int>>::iterator itr;
    for(itr=mset.begin(); itr!=mset.end(); ++itr){
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}