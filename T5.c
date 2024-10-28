#include <stdio.h>

int main() {
    int colors[2][3];

    printf("Enter RGB colors (press enter to insert the next color):\n");
    for (int i = 0; i < 2; i++) {
            for (int j=0; j<3; j++){
        scanf("%d", &colors[i][j]);
    }

    printf("\n");}
    //reds
    float greyscale[2][3];
    greyscale[0][0] = colors[0][0] *0.299;
    greyscale[1][0] = colors[1][0] *0.299;

    //Greens
    greyscale[0][1] = colors[0][1] *0.587;
    greyscale[1][1] = colors[1][1] *0.587;

    //Blues
    greyscale[0][2] = colors[0][2] *0.114;
    greyscale[1][2] = colors[1][2] *0.114;



    printf("RGB colors:\n");
    for (int i = 0; i < 2; i++) {
            for (int j=0; j<3; j++){
        printf("%d\t, ", colors[i][j]);
    }
    printf("\n");
    }



    printf("Greyscale colors:\n");
    for (int i = 0; i < 2; i++) {
            for (int j=0; j<3; j++){
        printf("%f\t ", greyscale[i][j]);
    }
    printf("\n");
    }
return 0;
}
