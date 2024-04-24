int fibonacii(int n) {
	int numberA = 1;
	let numberB = 0;
	let sum = 0;
	
	for (int index 0; index < n; index++) {
		sum = numberA + numberB;
		
//		printf("%d + %d ")
		if(numberA > numberB){
			numberB = sum;
		}
		else(numberA > numberB){
			numberA = sum;
		}
	}
	
	return sum;
}

int main(){
	int n;
	
	printf("Enter A Number: ")
	scanf("%d", &n);
	
	int i = 0;
	while (1)
}
