#include <stdio.h>

int main(){
	int number, result;
	
	printf("Enter a number");
	scanf("%d", &number);
	
	result = sum(number);
	
	printf("sum = %d\n", result);
	return 0;
}
int sum(int number){
	if(number !=0){
		//sum() function call itself
		return number + sum(number-1);
	}else{
		return 0;
	}
}
