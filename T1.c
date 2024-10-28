#include <stdio.h>

int main()
{

        int N,i, j;

        printf("Enter the value:");
        scanf("%d", &N);

	printf("With for loop\n");
        for (i = 1; i<=N; i++) {
                for (j=1;j<=i;j++){
                        printf("*");
                }
        printf("\n");
        }

	int x=0;
	printf("with while loop\n");

	while (x<=N){
	int y =0;	
	while (y<=x){

			printf("*");

			y++;
		}
		printf("\n");
		x++;
	}

return 0;

}
