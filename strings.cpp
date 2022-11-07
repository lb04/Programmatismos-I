#include <stdio.h>
#include <string.h>

int main(){
	char * first_name = "Lambros";
	char last_name[] = "Bako";
	if (strncmp(first_name, "Lambros", 7) == 0){
		printf("hey %s %s\n", first_name, last_name);
		
	}	else{
			printf("you are not %s\n", first_name);
		}
	 
	return 0;
}