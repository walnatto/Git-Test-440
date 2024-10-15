#include <stdio.h>

int main(void) {

	int firstnum;
	int secondnum;
	char calc;
	double output;

	printf("Input first number > ");
	scanf("%d",&firstnum);
	printf("\nInput second number > ");
	scanf("%d",&secondnum);
	printf("\nSelect type of calculation ( + | - | * | / ) > ");
	scanf(" %c",&calc);

	if(calc=='+') {
		output = firstnum+secondnum;
	} else if(calc=='-') {
		output = firstnum-secondnum;
	} else if(calc=='*') {
		output = firstnum*secondnum;
	} else {
		output = firstnum/secondnum;
	}
	
	printf("\nYou have selected '%c' and the answer is %.2f\n",calc,output);

	return 0;

}

