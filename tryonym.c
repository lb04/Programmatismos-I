#include<stdio.h>
#include<string.h>

void maths(float a, float b, float c){
	if(a!=0){
		float d = b*b-4*a*c;
		if(d>0){
			float x1 = (-b+sqrt(d))/2*a;
			float x2 =(-b-sqrt(d))/2*a;
			printf("the first solution is %f\n", x1);
			printf("the second solution is %f", x2);
		}
		else if(d == 0){
			float x3 = -b/2*a;
			printf("the solution is %f", x3);
		}
		else{
			printf("impossible!");
		}
	}
	else if(b!=0){
		float x4 = -c/b;
		printf("the solution of the non tryonym is:  %f", x4);
	}
	else{
		printf("no solutions!");
	}
}


int main(){
	float num1,num2,num3;
	char * ans;
	while(strcmp(ans,"exit")!=0){
		printf("please insert trhee nums so we could solve the tryonym: ");
		scanf("%f%f%f", &num1,&num2,&num3);
		maths(num1,num2,num3);
		printf("For exit type -->  exit");
		scanf("%s", ans);
	}
	
	return 0;
}


