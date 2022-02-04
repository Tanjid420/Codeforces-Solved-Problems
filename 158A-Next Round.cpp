#include<bits/stdc++.h>
using namespace std;
int main(){

int n,k,a,s=0,m[10000];
cin >> n >> k;
for(int i=1;i<=n;i++){

    cin >> a;
    m[i]=a;

}
// If the value of "j" index is greater than or equal to the value of "k" index

for(int j=1;j<=n;j++){

    if(m[j]>=m[k] && m[j]>0){
        s+=1;
    }
    else{
        s=s;
    }



}



cout << s <<endl;



}
