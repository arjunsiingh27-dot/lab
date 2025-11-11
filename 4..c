//WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major order respectively. Print both
//the input matrices and resultant matrix with suitable headings and output should be in matrix format only. Program must check the compatibility of orders
// of the matrices for multiplication. Report appropriate message in case of incompatibility.
 #include<stdio.h>
 int main(){
    int matrix_A[2][2];
    int matrix_B[2][2];
    int matrix_C[2][2];
    int i,j;
    printf("enter the elements of matrix A:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        scanf("%d",&matrix_A[i][j]);
    }
}
    printf("enter the elements of matrix B:\n");

for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        scanf("%d",&matrix_B[i][j]);
    }
}
printf("\nMatrix a is:\n");
for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d ",matrix_A[i][j]);
    }
    printf("\n");
}
printf("\nmatrix_B is:\n");
for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d ",matrix_B[i][j]);
    }
    printf("\n");
}
return 0;
}