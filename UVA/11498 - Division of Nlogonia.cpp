#include <cstdio>
#include <iostream>

using namespace std;

int main(){
   int k,x,y,x1,y1;
   while(scanf("%d",&k) && k > 0){
   		scanf("%d %d",&x,&y);
   		for(int i = 0 ; i < k ; i++){
   			scanf("%d %d",&x1,&y1);
   			if(x1 == x || y1 == y){
   				printf("divisa");
   			}else if(x1 > x && y1 > y){
   				printf("NE");
   			}else if(x1 > x && y1 < y){
   				printf("SE");
   			}else if(x1 < x && y1 > y){
   				printf("NO");
   			}else{
   				printf("SO");
   			}
   			printf("\n");
   		}
   }
   
   return 0;
}
