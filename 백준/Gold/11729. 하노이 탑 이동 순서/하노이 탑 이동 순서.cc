#include<iostream>
using namespace std;

void hano(int a, int b, int n)
{
    if(n==1){
        cout<< a<<' '<<b<<'\n';
        return ;
    }
    hano(a,6-a-b,n-1);
   	cout<<a <<' ' << b<<'\n';
    hano(6-a-b,b,n-1);
}

int main(void){
  	ios::sync_with_stdio(0);
  	cin.tie(0);
    int k;
    cin >> k;
    cout<<(1<<k)-1<<'\n';
    hano(1,3,k);
}