#include <stdio.h>

int main() 
{
	    /*declaring and initializing variables*/
	    int a = 50;
	        int b =70;
		    int sum = a + b;
		        
		        /* printing adress without pointers*/
		        printf("%p \n", &a);
			    printf("%p \n", &b);
			        printf("%p \n", &sum);
				    printf("\n");
				        
				        /*print the values and sum*/
				         printf("%d \n", a);
					     printf("%d \n", b);
					         printf("%d \n", sum);
						     printf("\n");
						         
						         /* declaring and initializing pointers*/
						         int *ptrA;
							     int *ptrB;
							         int *ptrC;
								     
								     ptrA = &a;
								         ptrB = &b;
									     ptrC = &sum;
									         /*printing the adress using pointers*/
									         printf("%p \n", ptrA);
										     printf("%p \n", ptrB);
										         printf("%p \n", ptrC);
											     printf("\n");
											        /*printing the values and sum using pointers*/
											        
											         printf("%d \n", *ptrA;
												     printf("%d \n", *prB);
												         printf("%d \n",*ptrC);
													     printf("\n")
													         /*operation using pointers/
													         printf("%p \n", (ptrA + 2))
														     printf("%p \n", (*ptrA + 2))
														         /*the output depends on datatype*/
														         printf("%d \n", (*ptrA + 2));															     return 0;
}
