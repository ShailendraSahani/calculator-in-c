#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	char opr;
	scanf("%i%i",&a,&b);
	scanf("%s",&opr);
	printf("1.For Additon\n2.For substration\n3.For multiplycation\n4.For division. ");
	if(opr=='+'){
		 c=a+b;
		printf("Addition of two numbers is...");
		printf("%i",c);
	}
	else if(opr=='-'){
		 c=a-b;
		printf("Substration of two numbers is ..");
		printf("%i",c);
	}
	else if (opr=='*'){
		 c=a*b;
		pritnf("multiplycation of two numbers is .");
		printf("%i",c);
	}
	else if(opr=='/'){
	    c=a/b;
		printf("division of two numbers is .");
		printf("%i",c);
	}
	else{
		printf("Wrong operator !");
	}
}
