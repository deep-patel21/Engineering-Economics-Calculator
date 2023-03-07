#include <stdio.h>
#include <math.h>

int main(void) {.

	int select;
	
	printf("1.  (P/A, i, N)  P given A\n\n2.  (A/P, i, N)  A given P\n\n3.  (P/F, i, N)  P given F\n\n4.  (F/P, i, N)  F given P\n\n5." 
	       + "(A/F, i, N)  A given F\n\n6.  (F/A, i, N)  F given A\n\n7.  (A/G, i, N)  A given G\n\n8.  (P/G, i, N)  P given G\n\n");
	printf("\n");
	scanf("%d", &select);
	
	if(select == 1) {  
		double P,  A, i, N;
		printf("P given A\n");
		printf("Enter A: ");
		scanf("%lf", &A);
		printf("Enter i: ");
		scanf("%lf", &i);
		printf("Enter N: ");
		scanf("%lf", &N);
		P = A*((pow((1+i), N)-1)/(i*pow((1+i), N)));
		printf("The value of (P/A, i, N) is: %.4f", P);
	}

	if(select == 2) {
		double A, P,  i, N;
		printf("A given P\n");
		printf("Enter P: ");
		scanf("%lf", &P);
		printf("Enter i: ");
		scanf("%lf", &i);
		printf("Enter N: ");
		scanf("%lf", &N);
		A = P *( (i*pow((1+i), N))/((pow((1+i), N)-1)));
		printf("The value of (A/P, i, N) is: %.4f", A);
	}
	
	if(select == 3) {
		double P, F, i, N;
		printf("P given F\n");
		printf("Enter F: ");
		scanf("%lf", &F);
		printf("Enter i: ");
		scanf("%lf", &i);
		printf("Enter N: ");
		scanf("%lf", &N);
		P = F* ((1)/(pow((1+i), N)));
		printf("The value of (P/F, i, N) is: %.4f", P);
	}
	
	if(select == 4) {
		double F, P, i, N;
		printf("F given P\n");
		printf("Enter P: ");
		scanf("%lf", &P);
		printf("Enter i: ");
		scanf("%lf", &i);
		printf("Enter N: ");
		scanf("%lf", &N);	
		F = P* (pow((1+i), N));
		printf("The value of (F/P, i, N) is: %.4f", F);
	}
	
	if(select == 5) {
		double A, F, i, N;
		printf("A given F\n");
		printf("Enter F: ");
		scanf("%lf", &F);
		printf("Enter i: ");
		scanf("%lf", &i);
		printf("Enter N: ");
		scanf("%lf", &N);	
		A = F*((i)/(pow((1+i),N)-1));
		printf("The value of (A/F, i, N) is: %.4f", A);
	}
	
	if(select == 6) {
		double F, A, i, N;
		printf("F given A\n");
		printf("Enter A: ");
		scanf("%lf", &A);
		printf("Enter i: ");
		scanf("%lf", &i);
		printf("Enter N: ");
		scanf("%lf", &N);	
		F = A* ( (pow((1+i), N) -1  ) / (i) );
		printf("The value of (F/A, i, N) is: %.4f", F);
	}
	
	if(select == 7) {
		double A, G, i, N;
		printf("A given G\n: ");
		printf("Enter G: ");
		scanf("%lf", &G);
		printf("Enter i: ");
		scanf("%lf", &i);
		printf("Enter N: ");
		scanf("%lf", &N);	
		A = G * (((pow((1+i),N) - (i*N) - 1))/(i*pow((1+i), N) - i));
		printf("The value of (A/G, i, N) is: %.4f", A);
	}
	
	if(select == 8) {
		double P, G, i, N;
		printf("P given G\n: ");
		printf("Enter G: ");
		scanf("%lf", &G);
		printf("Enter i: ");
		scanf("%lf", &i);
		printf("Enter N: ");
		scanf("%lf", &N);	
		P = G * ((((pow((1+i), N) - (i*N) -1)) / ((pow(i, 2))*(pow((1+i), N)))));
		printf("The value of (P/G, i, N) is: %.4f", P);
	}
	
	printf("\n\n\n\n\n");
	
	return 0;
}
