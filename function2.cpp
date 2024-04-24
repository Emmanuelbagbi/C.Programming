#include <stdio.h>

int addNumbers(int a, int b): //function prototype

 int main(){
	int num1, num2, sum;
	printf("please enter two numbers");
	scanf("%d\t %d", &num1, &num2);
	
	sum = addNumbers(num1, num2); //function passed to a variable
	printf("sum = %d\n", sum)
	
	result 0;
}

int addNumbers(int a, int b){
	int result;
	result = a + b;
	return result;
}



