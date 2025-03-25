#include <stdio.h>
int main(){

	int n = 0;
	int pow = 0;
	int oper = 0;

	printf("Enter your number: ");
	scanf("%d", &n);
	printf("Enter the power of two: ");
	scanf("%d", &pow);
	printf("Type in 1 for multiplication, 2 for division: ");
	scanf("%d", &oper);
	
	if(pow>0){
		if(oper == 1) {
			n = n << (pow);
		} else if(oper == 2) {
			n = n >> (pow);
		}
	
	}else if(pow<0){
		if(oper == 1) {
			n = n >> (-pow);
		} else if(oper == 2) {
			n = n << (-pow);
		}
	}     

	printf("The result is %d\n", n);	
	
	return 0;

}

