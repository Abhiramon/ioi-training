#include <cstdio>
#include <iostream>

using namespace std;

int main(){
   int t,n,k,mn,mx;
   scanf("%d",&t);
   while(t--){
        scanf("%d",&n);
        mn = 1000;
 		mx = 0;
 		for(int i = 0 ; i < n ; i++){
 			scanf("%d",&k);
 			mn = min(mn,k);
 			mx = max(mx,k);
 		}
 		printf("%d\n",2 * (mx - mn));
   }   
   return 0;
}
