#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
   /* n-=3;
    if(n%2==0){
        cout << (n+3)*(n*(3+3+(int)(n/2)));
    }else{
   //     out << (n+3)*((3+3+(int)(n/2)-1);
    }*/
    cout << (int)(n^2*3)+n*(-23);
        
    return 0;
}