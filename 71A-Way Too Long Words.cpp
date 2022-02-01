#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n=0;
   cin >> n;
   string myWords;
   for(int i=1; i<=n ;i++){
    cin >> myWords;
   if(myWords.length()>10){
    cout << myWords[0] <<myWords.length()-2 <<myWords[myWords.length()-1] << endl;
   }
   else{
    cout << myWords << endl;
   }
    }
    return 0;

}
