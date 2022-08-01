#include <iostream>
#include<queue>
using namespace std;
int vs[5][5] = {{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};
int main(){
    int n,na,nb,sa=0,sb=0;
    cin >> n >> na>>nb;
    queue<int> qa[na+1];
    queue<int>qb[nb+1];
    for(int i = 0;i<na;i++){
        int temp;
        cin >> temp;
        qa->push(temp);
    }
    for(int i = 0;i<nb;i++){
        int temp;
        cin >> temp;
        qb->push(temp);
    }
    for(int i = 0 ;i<n;i++){
        sa+=vs[qa->front()][qb->front()];
        sb+=vs[qb->front()][qa->front()];
        qa->push(qa->front());
        qa->pop();
        qb->push(qb->front());
        qb->pop
        ();
    } 
    cout << sa<<' '<<sb<<endl;
    return 0;   
}
