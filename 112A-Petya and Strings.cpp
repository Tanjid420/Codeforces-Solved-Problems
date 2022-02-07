#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(){

string f,s;
int p=0,q=0;
cin >> f >> s;
for(int i=0;i<=f.size();i++){

    int a=f[i];
    if(isupper(a)){
        f[i]=tolower(a);
    }
    else{
        a=a;
    }
    int b=s[i];
    if(isupper(b)){
        s[i]=tolower(b);
    }
    else{
        b=b;
    }
    p += (int)f[i];
    q += (int)s[i];
    if(p!=q){
            if(p<q){
    cout << "-1" << endl;
}
else if(p>q){
    cout << "1" << endl;
}
return 0;
    }

}
cout << "0" << endl;




}
