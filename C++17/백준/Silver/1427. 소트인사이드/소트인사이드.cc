//#include "library.h"

#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;
int main(void){
    vector<int> num;
    char ch[11];
    cin>>ch;
    sort(ch,ch+strlen(ch),greater<char>());
    cout<<ch;
    
    return 0;
}