# include<iostream>
using namespace std;
int n,m;
int arr[9];
bool isuse[9];
void func(int k){
    if(k==m)
    {
        for(int i=0;i<m;i++)
            cout<<arr[i]<<' ';
        cout<<'\n';
        return ;
    }
    for(int i=1;i<=n;i++)
        if(!isuse[i]){
            arr[k]=i;
            isuse[i]=true;
            func(k+1);
            isuse[i]=false;
        }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    func(0);
}
