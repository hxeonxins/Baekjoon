#include <iostream>
#include <queue>
#include <functional>
#include <cstdio>
using namespace std;

int main()
{
    
    
    priority_queue<int,vector<int>,greater<int>> pq;
    int n,temp,a;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        pq.push(temp);
    }
    int sum =0;
    while(pq.size()>1){
        a=pq.top();
        pq.pop();
        a += pq.top();
        pq.pop();
        sum+=a;
        pq.push(a);
    }
    printf("%d",sum);
    
    return 0;
}