#include<bits/stdc++.h>
using namespace std;
int main(){

int n,X=0;
string s;
cin >> n;
for(int i=1;i<=n;i++){
        cin >> s;
    if(s=="X++" || s=="++X"){
        X++;
    }
    else{
        X--;
    }


}

cout << X <<endl;


}
