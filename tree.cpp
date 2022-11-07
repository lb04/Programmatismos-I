#include <stdio.h>

int i;
int main(){
	char * x = "*";
	printf("  %s\n", x);
	for(i = 1;i < 3; i++){
		if (i == 1){
			x = " ***";
			printf("%s\n", x);
		}
		if (i == 2){
			x = "*****";
			printf("%s\n", x);	
		
		}
		
	}
	
	return 0;
}
