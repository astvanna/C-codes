#include <stdio.h>
int main(){

	int num1 = 0;
	int num2 = 0;
	int oper = 0;
	int res = 0;

	printf("Enter the first number: ");
	scanf("%d", &num2);
	printf("Enter the second number: ");
	scanf("%d", &num1);
	printf("Type in \n1.& (AND)\n2.| (OR)\n3.^ (XOR)\n4.>> (RIGHT SHIFT)\n5.<< (LEFT SHIFT)\n: ");
	scanf("%d", &oper);

	if(oper == 1){
		res = num1 & num2;
	}else if(oper == 2){
		res = num1 | num2;
	}else if(oper == 3){
		res = num1 ^ num2;
	}else if(oper == 5){
                res = num1 << num2;
	}else if(oper == 4){
		res = num1 >> num2;
	}

	printf("The result is %d\n", res);
	return 0;
}
