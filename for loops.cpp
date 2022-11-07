#include <stdio.h>

int i;
int main(){
	
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int m = 1;
	for (i = 0;i<10; i++){
		m = m*array[i];
	}
	printf("!10 is %d", m);
	return 0;

}



