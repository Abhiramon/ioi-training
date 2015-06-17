#include <cstdio>
#include <cstring>

using namespace std;


int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		char k[20000];
		scanf("%s",&k);
		int len = strlen(k);
		if(strcmp(k,"1") == 0 || strcmp(k,"4") == 0 || strcmp(k,"78") == 0){
			printf("+\n");
		}else if( k[len - 2] == '3' && k[len -1]== '5'){
			printf("-\n");
		}else if( k[0] == '9' && k[len - 1] == '4'){
			printf("*\n");
		}else if( k[0] == '1' && k[1] == '9' && k[2] == '0'){
			printf("?\n");
		}else printf("+\n");
	}
	return 0;
}
