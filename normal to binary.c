#include <stdio.h>
void binary(int num){
	int keep = num;
	int poiliko = num / 2;
	int ypoloipo = num % 2;
	static int array[64];	
	int i = 0;
	while (poiliko > 0){
		if (poiliko == 0){
			array[i] = ypoloipo;
			break;
		}
		array[i] = ypoloipo;
		num = poiliko;
		poiliko = num / 2;
		ypoloipo = num % 2;	
		i++;
	} 
	printf("the number %d is converted to: ", keep);
	int j;
	for(j = i;j >= 0;j--){
		printf("%d", array[j]);
	}
}
void octal(int number){
	int keep2 = number;
	int poiliko_8 = number / 8;
	int ypoloipo_8 = number % 8;
	static int array_8[64];
	int i = 0;
	while(poiliko_8 > 0){
		array_8[i] = ypoloipo_8;
		number = poiliko_8;
		poiliko_8 = number / 8;
		ypoloipo_8 = number % 8;
		i++;		
	}
	printf("your number %d is converted to: ", keep2);
	int j;
	for(j = i;j>=0;j--){
		printf("%d", array_8[j]);
	}
}
void hexademical(int num_16){
	printf("%d", num_16);
}

int main(){
	int x;
	char * ans;
	printf("convertable situations:\n");
	printf("1) binary\n");
	printf("2) octal\n");
	printf("3) hexadecimal\n");
	scanf("%s", &ans);
	while(ans=="binary"|| ans=="octal"|| ans=="hexadecimal"||ans == "continue"){
		if(ans == "binary"){
			printf("Please insert a number to change it: ");
			scanf("%d", &x);
			binary(x);
		}
		if(ans == "octal"){
			printf("Please insert a number to change it: ");
			scanf("%d", &x);
			octal(x);	
		}
		if(ans == "hexademical"){
			printf("Please insert a number to change it: ");
			scanf("%d", &x);
			hexademical(x);
		}
		else{
			char * ans_2;
			printf("For exit please type EXIT or type continue");
			scanf("%s", &ans_2);
			if (ans_2 =	"EXIT"){
				return 1;
			}	
			else{
				ans == "continue";
			}
		}
	}
	return 0;	
}		

