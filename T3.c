/// I have two implementations
/// First Implementation 

#include <stdio.h>      
#include <stdlib.h>    
#include <time.h>      


int main() {
        srand(time(0));
        int xt= time(0)/1000000000; /// divided by this big number to make the grid look neater :) 
        int yt = xt+3;
        int size_of_matrix = yt*2;
        printf("xt %d and yt is %d and size is %d", xt,yt, size_of_matrix);
        int matrix[size_of_matrix][size_of_matrix];
        for (int i=0; i< size_of_matrix; i++){
                for (int j=0; j<size_of_matrix;j++){
                        if(i==xt && j== yt) {printf("Hurra!\n"); break;}
                        else{   printf(".\t");
                                }}
                printf("\n");
    }

        return 0;
}


/// Second Implementation 
/// #include <stdio.h>
/// #include <stdlib.h>

/// int main() {

///     int xt = rand() % 14;
///     int yt = rand() %14;
    /// printf("x is %d and y is %d\n", xt,yt);
    /// int matrix[14][14];
   ///  for (int i=0; i< 14; i++){
/// 	for (int j=0; j<14;j++){
/// 	if(i==xt && j== yt) {printf("Hurra!\n"); break;}
/// 	else{	printf(".\t");
/// 	}}
/// 	printf("\n");
    /// }
   ///  return 0;
/// }

