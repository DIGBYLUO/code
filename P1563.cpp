#include <iostream>
using namespace std;
struct s
{
    int d;
    string n;
};

int main(){
    unsigned int n,m,now=0;
    cin >> n>>m;
    s a[n];
    for(int i =0;i<n;i++){
        cin >> a[i].d>>a[i].n;
    }
    int t1,t2;
    for(int i=1;i<=m;i++)
    {
        cin>>t1>>t2;
        if(a[now].d==0&&t1==0){
            now=(now+n-t2)%n;
        }else if(a[now].d==0&&t1==1){
            now=(now+t2)%n;
        }else if(a[now].d==1&&t1==0){
            now=(now+t2)%n;
        }else if(a[now].d==1&&t1==1){
            now=(now+n-t2)%n;
        }
    }
    cout<<a[now].n<<endl;
    return 0;
}
