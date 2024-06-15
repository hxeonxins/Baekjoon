#include <iostream>
#include <string>
using namespace std;

string s;
int cnt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    while(getline(cin,s)) cnt++;
    
    cout << cnt;
}