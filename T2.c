#include <stdio.h>

int main()
{

        int N,i, j;

        printf("This is your stop watch: Enter the value in minutes:");
        scanf("%d", &N);
        for (i = 0; i<=N; i++) {
		if(i==N){break;}
                for (int j=0;j<=59;j++){
                        printf("%02d:%02d\n",i,j);
                }
        printf("\n");
        }


return 0;

}
