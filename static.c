#include <stdio.h>

int sum(int num){

	static int count = 0;
	count = count + num;
	return count;
}
int main(void){
	printf("%d\t", sum(55));
	printf("%d\t", sum(45));
	printf("%d\t", sum(50));
	return 0;
}

	
	
