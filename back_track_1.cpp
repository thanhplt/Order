#include <bits/stdc++.h>
using namespace std;
int n,k,s;
int cnt = 0 ;
void Try(int i,int j,int h){
    if ( i == k ){
        if ( h == s ) cnt++;
        return;
    }
    else {
        for (int u = j ; u <= n ; u++){
            if ( h + u <= s){
                Try(i+1,u+1,h + u);
            }
        }         
    }
}
int main(){
    cin>>n>>k>>s;
    Try(0,1,0);
    cout<<cnt;  
    return 0;  
}
// hello bitch
