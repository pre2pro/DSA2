#include<stdio.h>

print_mat(int x[][10], int n);
read_mat(int x[][10], int n);
trans_mat(int x[][10], int y[][10], int n);

void main(){
    int a[10][10], t[10][10], n, i, j;

    printf("\n Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("\n Enter the elements of the matrix: ");
    read_mat(a,n);

    printf("\n Original matrix: \n");
    print_mat(a,n);

    trans_mat(a,t,n);

    printf("\n Transpose of the matrix: \n");
    print_mat(t,n);
}

print_mat(int x[][10], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%4d", x[i][j]);
        }
        printf("\n");
    }
    return;
}
read_mat(int x[][10], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &x[i][j]);
        }
    }
    return;
}

trans_mat(int x[][10], int y[][10], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            y[i][j] = x[j][i];
        }
    }
    return;
}