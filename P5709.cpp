#include <iostream>
using namespace std;
int main(){
    int m,t,s;
    cin >> m >> t >> s;
    if(t == 0){
        cout << 0<<endl;
        return 0;
    }
    if(m - (int)(s/t)<=0){
        cout << 0<<endl;
        return 0;
    }
    if(s/t-(int)(s/t)>0){
        cout << m - (int)(s/t)-1<<endl;
        return 0; 
    }
    cout << m - (int)(s/t)<<endl;
    return 0;
}