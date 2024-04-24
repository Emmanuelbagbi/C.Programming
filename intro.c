#include <stdio.h>
int main(){
	int a = 10;
	float b = 3.142;
	char c = 'A';
	printf("the value of a is: %d\n\n", a);
	printf("the value of b is: %.2f\n\n", b);
	printf("the value of c is %c\n\n", c);
	
	printf("size of integer = %d btyes\n", sizeof(a));
	printf("size of float = %d btyes\n", sizeof(b));
	printf("size of char = %d btyes\n", sizeof(c));
}

