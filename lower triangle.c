#include<stdio.h>
int i,j;
int main(){
    int x;
    printf("dwse diastash: ");
    scanf("%d", &x);
	int array[x][x];
    for(i = 0;i < x; i++){
        for(j = 0;j < x;j++){
            printf("Dwse array[%d][%d]: ",i,j);
            scanf("%d", &array[i][j]);
        }
    }
    for(i = 0;i < x; i++){
        for(j = 0;j < x;j++){
            if(j > i){
                array[i][j] = 0;
            }
            if(j == x-1){
				printf("%d\n", array[i][j]);
    		}
    		else{
    			printf("%d", array[i][j]);
			}
		}
	}
	
	return 0;
}