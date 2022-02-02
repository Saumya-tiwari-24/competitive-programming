#include<bits/stdc++.h>
#define ll long long 
#define nline '\n'
using namespace std;
const int N = 1e7 + 1;

int main(){
   ll n, m;
  while(cin >> n >> m) {
   if( n <= 1 && m <= 1){
      if(n == 1 || m == 1){
         cout << n << " " << m << " " <<  1 << nline;
      }
      else{
         cout <<  n  << " " << m << " " <<  0  << nline;
      }
   }
   else{
   vector<int> store(N , 0);
   ll ans = 1;
   for(ll i = min(n,m); i <= max(n,m); i++){
      ll p = i;
      ll ct = 0;
      if(i != 0){
      while( p != 1){
          if(store[p] != 0 && p < N){
            ct += store[p];
            break;
         }
         if(p % 2 == 0){
            p = p / 2;
            ct++;
         }
         else{
            p = 3 * p + 1;
            ct++;
         }
      }
   }
      store[i] = ct;
      ans = max(ct,ans);
   }

   cout << n << " " << m << " " << ans + 1 << nline;
}
}  
return 0;
  
}
   
