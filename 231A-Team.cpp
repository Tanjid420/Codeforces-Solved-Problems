#include<bits/stdc++.h>
using namespace std;
int main(){

int n,p,v,t,s=0;
cin >> n;
for(int i=1;i<=n;i++){
    cin >> p >> v >> t;
    if(p+v+t>=2){
        s+=1;
    }
    else{
        s=s;
    }

}

cout << s <<endl;





}
