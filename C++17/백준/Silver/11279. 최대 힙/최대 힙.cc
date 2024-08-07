#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<int> pq;
    int n,temp;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        if(temp){
            pq.push(temp);
        } else {
            if(pq.empty()){
                cout << "0\n";
            } else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }
    
    return 0;
}