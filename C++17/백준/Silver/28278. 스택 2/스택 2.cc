#include <iostream>
#include <stack>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack <int> a;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        if(temp==1){
            int num;
            cin >> num;
            a.push(num);
        } else if(temp==2){
            if(!a.empty()){
            cout << a.top() << '\n';
            a.pop();
            } else {
                cout << -1 << '\n';
            }
          
        } else if(temp==3){
            cout << a.size() << '\n';
        } else if(temp==4){
            cout << a.empty() << '\n';
        } else {
            if(!a.empty()){
            cout << a.top() << '\n';
            } else {
                cout << -1 <<'\n';
            }
        }
           
    }
    
    return 0;
}