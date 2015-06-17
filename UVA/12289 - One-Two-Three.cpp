#include <cstdio>
#include <cstring>

using namespace std;


int main() {
	int t;
	scanf("%d",&t);
	for(int i = 0 ; i < t;i++){
		char c[128];
		scanf("%s",c);
		int len = strlen(c);
		if(len == 5){
			printf("3\n");
		}else{
			int m = 0;
			if(c[0] == 'o')
				m++;
			if(c[1] == 'n')
				m++;
			if(c[2] == 'e')
				m++;
			printf("%d\n",(m >= 2 ? 1 : 2));
		}
	}
	return 0;
}
