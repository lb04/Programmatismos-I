#include<stdio.h>
#include<string.h>
int n,p;
char * s;
float x,y,z,w;
float multiply(float x,float y,float z,float w){
	printf("select the number of numbers you want: ");
	scanf("%d",&n);
	if(n == 1){
		printf("Give number\n ");
		printf("x: ");
		scanf("%f", &x);
		printf("the multiply of x is: %f", x);
	} 
	if(n == 2){
		printf("Give numbers\n ");
		printf("x: ");
		scanf("%f", &x);
		printf("y: ");
		scanf("%f", &y);
		printf("the multiply of x*y is: %f", x*y);
	}
	if(n == 3){
		printf("Give numbers\n ");
		printf("x: ");
		scanf("%f", &x);
		printf("y: ");
		scanf("%f", &y);
		printf("z: ");
		scanf("%f", &z);
		printf("the multiply of x*y*z is: %f", x*y*z);
		
	}
	if(n == 4){
		printf("Give numbers\n ");
		printf("x: ");
		scanf("%f", &x);
		printf("y: ");
		scanf("%f", &y);
		printf("z: ");
		scanf("%f", &z);
		printf("w: ");
		scanf("%f", &w);
		printf("the multiply of x*y*z*w is: %f", x*y*z*w);
	}
}
float division(float x,float y,float z,float w){
	printf("select the number of numbers you want: ");
	scanf("%d",&n);
	if(n == 1){
		printf("Give number\n ");
		printf("x: ");
		scanf("%f", &x);
		printf("the division of x is: %f", x);
	} 
	if(n == 2){
		printf("Give numbers\n ");
		printf("x: ");
		scanf("%f", &x);
		printf("y: ");
		scanf("%f", &y);
		printf("Press '1' for x/y or '2' for y/x: ");
		scanf("%d", &p);
		while(p!=1&&p!=2){
			printf("Please insert a correct number: ");
			scanf("%d", &p);
		}
		if(p == 1){
			printf("the division of x/y is: %f", x/y);
		}
		else{
			printf("the division of y/x: %f", y/x);
		}
	}
	if(n == 3){
		printf("Give numbers\n ");
		printf("x:");
		scanf("%f", &x);
		printf("y: ");
		scanf("%f", &y);
		printf("z: ");
		scanf("%f", &z);
		printf("Press ['1' for x/y/z] or ['2' for x/z/y] or ['3' for y/x/z] or ['4' for y/z/x] or ['5' for z/x/y] or ['6' for z/y/x]: ");
		scanf("%d", &p);
		while(p<1||p>6){
			printf("Please insert a correct number: ");
			scanf("%d", &p);
		}
		if(p == 1){
			printf("The division of x/y/z is: %f", x/y/z);
		}
		if(p == 2){
			printf("The division of x/z/y is: %f", x/z/y);
		}
		if(p == 3){
			printf("The division of y/x/z is: %f", y/x/z);
		}
		if(p == 4){
			printf("The division of y/z/x is: %f", y/z/x);
		}
		if(p == 5){
			printf("The division of z/x/y is: %f", z/x/y);
		}
		if(p == 6){
			printf("The division of z/y/x is: %f", z/y/x);
		}
	}
	if(n == 4){
		printf("Give numbers\n ");
		printf("x: ");
		scanf("%f", &x);
		printf("y: ");
		scanf("%f", &y);
		printf("z: ");
		scanf("%f", &z);
		printf("w: ");
		scanf("%f", &w);
		printf("Press a number between 1 - 24: ");
		scanf("%d", &p);
		while(p<1||p>24){
			printf("Try again: ");
			scanf("%d", &p);
		}
		if(p == 1){
			printf("The division of x/y/z/w is: %f", x/y/z/w);
		}
		if(p == 2){
			printf("The division of x/y/w/z is: %f", x/y/w/z);
		}
		if(p == 3){
			printf("The division of x/w/z/y is: %f", x/w/z/y);
		}
		if(p == 4){
			printf("The division of x/w/y/z is: %f", x/w/y/z);
		}
		if(p == 5){
			printf("The division of x/z/y/w is: %f", x/z/y/w);
		}
		if(p == 6){
			printf("The division of x/z/w/z is: %f", x/z/w/z);
		}
		if(p == 7){
			printf("The division of y/x/z/w is: %f", y/x/z/w);
		}
		if(p == 8){
			printf("The division of y/x/w/z is: %f", y/x/w/z);
		}
		if(p == 9){
			printf("The division of y/w/z/x is: %f", y/w/z/x);
		}
		if(p == 10){
			printf("The division of y/w/x/z is: %f", y/w/x/z);
		}
		if(p == 11){
			printf("The division of y/z/w/x is: %f", y/z/w/x);
		}
		if(p == 12){
			printf("The division of y/z/x/w is: %f", y/z/x/w);
		}
		if(p == 13){
			printf("The division of z/y/x/w is: %f", z/y/x/w);
		}
		if(p == 14){
			printf("The division of z/y/w/x is: %f", z/y/w/x);
		}
		if(p == 15){
			printf("The division of z/x/w/y is: %f", z/x/w/y);
		}
		if(p == 16){
			printf("The division of z/x/y/w is: %f", z/x/y/w);
		}
		if(p == 17){
			printf("The division of z/w/y/x is: %f", z/w/y/x);
		}
		if(p == 18){
			printf("The division of z/w/x/y is: %f", z/w/x/y);
		}
		if(p == 19){
			printf("The division of w/x/z/y is: %f", w/x/z/y);
		}
		if(p == 20){
			printf("The division of w/x/y/z is: %f", w/x/y/z);
		}
		if(p == 21){
			printf("The division of w/y/z is: %f", w/y/z/x);
		}
		if(p == 22){
			printf("The division of w/y/x is: %f", w/y/x/z);
		}
		if(p == 23){
			printf("The division of w/z/y is: %f", w/z/y/x);
		}
		if(p == 24){
			printf("The division of w/z/x is: %f", w/z/x/y);
		}
	}
}
float addition(float x,float y,float z,float w){
	printf("select the number of numbers you want: ");
	scanf("%d",&n);
	if(n == 1){
		printf("Give number\n ");
		printf("x: ");
		scanf("%f", &x);
		printf("the addition of x is: %f", x);
	} 
	if(n == 2){
		printf("Give numbers\n ");
		printf("x: ");
		scanf("%f", &x);
		printf("y: ");
		scanf("%f", &y);
		printf("the addition of x+y is: %f", x+y);
	}
	if(n == 3){
		printf("Give numbers\n ");
		printf("x: ");
		scanf("%f", &x);
		printf("y: ");
		scanf("%f", &y);
		printf("z: ");
		scanf("%f", &z);
		printf("the addition of x+y+z is: %f", x+y+z);
		
	}
	if(n == 4){
		printf("Give numbers\n ");
		printf("x: ");
		scanf("%f", &x);
		printf("y: ");
		scanf("%f", &y);
		printf("z: ");
		scanf("%f", &z);
		printf("w: ");
		scanf("%f", &w);
		printf("the addition of x+y+z+w is: %f", x+y+z+w);
	}
}
float subtraction(float x,float y,float z,float w){
	printf("select the number of numbers you want: ");
	scanf("%d",&n);
	if(n == 1){
		printf("Give number\n ");
		printf("x: ");
		scanf("%f", &x);
		printf("the subtraction of x is: %f", x);
	} 
	if(n == 2){
		printf("Give numbers\n ");
		printf("x: ");
		scanf("%f", &x);
		printf("y: ");
		scanf("%f", &y);
		printf("the subtraction of x-y is: %f", x-y);
	}
	if(n == 3){
		printf("Give numbers\n ");
		printf("x: ");
		scanf("%f", &x);
		printf("y: ");
		scanf("%f", &y);
		printf("z: ");
		scanf("%f", &z);
		printf("the subtraction of x-y-z is: %f", x-y-z);
		
	}
	if(n == 4){
		printf("Give numbers\n ");
		printf("x: ");
		scanf("%f", &x);
		printf("y: ");
		scanf("%f", &y);
		printf("z: ");
		scanf("%f", &z);
		printf("w: ");
		scanf("%f", &w);
		printf("the subtraction of -x-y-z-w is: %f", -x-y-z-w);
}
	
}
int main(){
	int t;
	printf("\tMENU\n");
	printf("   1.multiply\n");
	printf("   2.division\n");
	printf("   3.addition\n");
	printf("   4.subtraction\n\n");
	printf("NOTE!!! if you select division choose the order of the numbers you want to devide!\n\n");
	printf("Type the number of the action you want: ");
	scanf("%d", &t);
	while((t<1)||(t>4)){
		printf("Please put one of the following numbers [1, 2, 3, 4]: ");		
		scanf("%d", &t);
	}
	if(t == 1){
		multiply(x,y,z,w);
	}
	if(t == 2){
		division(x,y,z,w);
	}
	if(t == 3){
		addition(x,y,z,w);
	}
	if(t == 4){
		subtraction(x,y,z,w);
	}
}