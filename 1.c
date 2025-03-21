#include<stdio.h>

// Three-Dimentions Arry

int main() {
    system("cls");
    int r1 = 0;
    int r2 = 0;
    int r3 = 0;
    int r4 = 0;
    int r5 = 0;
    int r6 = 0;
    int r7 = 0;
    int r8 = 0;
    int r9 = 0;
    int num[3][3][3] = {
     {
        {1,2,3},
        {4,5,6},
        {7,8,9},
     },
     {
        {10,11,12},
        {13,14,15},
        {16,17,18},
     },
     {
        {19,20,21},
        {22,23,24},
        {25,26,27},
     }

    };
    int l[9], m= 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            l[m] = 0;
            for(int k = 0; k < 3; k++){
                
                l[m] += num[i][j][k];
                // if(i == 0 && j == 0){
                //     r1+=num[i][j][k];
                // }
                // if(i == 0 && j == 1){
                //     r2+=num[i][j][k];
                // }
                // if(i == 0 && j == 2){
                //     r3+=num[i][j][k];
                // }
                // if(i == 1 && j == 0){
                //     r4+=num[i][j][k];
                // }
                // if (i == 1 && j == 1)
                // {
                //     r5+=num[i][j][k];
                // }
                // if (i == 1 && j == 2)
                // {
                //     r6+=num[i][j][k];
                // }
                // if (i == 2 && j == 0)
                // {
                //     r7+=num[i][j][k];
                // }
                // if (i == 2 && j == 1)
                // {
                //     r8+=num[i][j][k];
                // }
                // if (i == 2 && j == 2)
                // {
                //     r9+=num[i][j][k];
                // }
                
                // printf("%d",num[i][j][k]);
            }
            printf("%d",l[m]);
            m++;
            printf("\n");
        }
        printf("\n");
    }

    // printf("\n");

    // printf("sum of first row %d\n",r1);
    // printf("sum of second row %d\n",r2);
    // printf("sum of third row %d\n",r3);
    // printf("sum of forth row %d\n",r4);
    // printf("sum of fifth row %d\n",r5);
    // printf("sum of sixth row %d\n",r6);
    // printf("sum of seventh row %d\n",r7);
    // printf("sum of eighth row %d\n",r8);
    // printf("sum of ninth row %d\n",r9);
   return 0;
}