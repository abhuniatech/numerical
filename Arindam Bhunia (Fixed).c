/*Fixed Point Iteration*/

#include<stdio.h>
#include<math.h>

int main()
{
	double x0, x1;
	double e=pow(10,-15);
	int i=1, N;
	double diff=4;
	
	printf("Enter initial number\n"); /* input of initial iteration*/
	scanf("%lf", &x0);
	
	printf("\nEnter the no. of iterartions\n");
	scanf("%d", &N);
		
	for(i=1;i<=N;i++)
	{
		x1=exp((-2)*x0);
		diff=fabs(x1-x0);
			
		if(diff<e||i==N) /* Concluding solution under the given error or finite iteration*/ 
		{
			printf("\nThe Approximate root is %0.15lf", x1);
			printf("\nCompleted operations after %d iterations", i);
			break;
		}
				
		else  /* Initiating loop for the values which does follow above conditions*/
		{
			x0=x1;
		}
	
		
	}
	
	return 17021;
}
