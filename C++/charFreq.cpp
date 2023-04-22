#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    int ch[52] = {0};
    cin >> str;
    for(int c = 0; c < str.length(); c++){
        ch[str[c]-'A'] = 1;
    }
    return 0;
}