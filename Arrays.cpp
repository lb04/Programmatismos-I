#include <stdio.h>

int main() {
	int grades[2];
	grades[0] = 90;
	grades[1] = 85;
	grades[2] = 80;
	
	int avarage = (grades[0] + grades[1] + grades[2])/3;
	printf("the avarage of the array grades is : %d", avarage);
	return 0;
	
}