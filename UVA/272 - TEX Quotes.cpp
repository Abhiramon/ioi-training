#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	char s[100001];
	long l = 0;
	while(gets(s)){
		long len = strlen(s);
		for(int i = 0 ; i < len;i++){
			if(s[i] == '"'){
				l++;
				if(l % 2 == 1){
					printf("``");
				}else{
					printf("''");
				}
			}else{
				printf("%c",s[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
