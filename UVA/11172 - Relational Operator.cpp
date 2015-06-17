#include <cstdio>

using namespace std;

int main(){
   int t,n,m;
   scanf("%d",&t);
   while(t--){
        scanf("%d %d",&n,&m);
        if(n == m) printf("=");
        else printf(n > m ? ">" : "<");
        printf("\n");
   }   
   return 0;
}
