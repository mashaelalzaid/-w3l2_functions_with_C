
#include <stdio.h>
#include <stdlib.h>

int main() {

    int xt = rand() % 14;
    int yt = rand() %14;
    printf("x is %d and y is %d\n", xt,yt);
    int matrix[14][14];
    for (int i=0; i< 14; i++){
	for (int j=0; j<14;j++){
	if(i==xt && j== yt) {printf("Hurra!\n"); break;}
	else{	printf(".\t");
	}}
	printf("\n");
    }
    return 0;
}

