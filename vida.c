#include <stdio.h>

void inicializa_matriz(int [][10]);
void lectura(int [][10], int *, int *, int *);
void muestra(int [][10], int, int);
void evoluciones(int [][10], int [][10], int, int, int);
int cuenta_vecinos(int [][10], int, int);

int main(){
    int mat[10][10];
    int mat1[10][10];
    int fil, col, ciclos;
    inicializa_matriz(mat);
    inicializa_matriz(mat1);
    //muestra(mat, 10, 10);
    lectura(mat, &fil, &col, &ciclos);
    muestra(mat, fil, col);
    evoluciones(mat, mat1, fil, col, ciclos);
    printf("\n\n");
    muestra(mat1, fil, col);
    return 0;
}

void inicializa_matriz(int mat[][10]){
    int i, j;
    for (i=0; i < 10; i++){
        for(j=0; j < 10; j++){
            mat[i][j] = 0;
        }
    }
}

void lectura(int mat[][10], int *fil, int *col, int *ciclos){
    FILE *ent;
    int k, i, f, c;
    ent = fopen("insectos.txt", "r");
    fscanf(ent, "%d", fil);
    fscanf(ent, "%d", col);
    fscanf(ent, "%d", ciclos);
    fscanf(ent, "%d", &k);
    for (i = 0; i < k; i++){
        fscanf(ent, "%d", &f);
        fscanf(ent, "%d", &c);
        mat[f][c] = 1;
    }
    fclose(ent);
}

void muestra(int mat[][10], int fil, int col){
    int i, j;
    for(i=0; i < fil; i++){
        for (j=0; j < col; j++){
            printf("%2d", mat[i][j]);
        }
        printf("\n");
    }
}

void evoluciones(int m1[][10], int m2[][10], int fil, int col, int ciclos){
    int i, j, vecinos;
    for(i=0; i < fil; i++){
        for(j=0; j < col; j++){
            vecinos = cuenta_vecinos(m1, i, j);
            if (m1[i][j] == 0){
                if (vecinos == 3){
                    m2[i][j] = 1;
                }
            }
            else{
                if ((vecinos == 2) || (vecinos == 3)){
                    m2[i][j] = 1;
                }
                else{
                    m2[i][j] = 0;
                }
            }
        }
    }
}

int cuenta_vecinos(int m[][10], int i, int j){
    int vec = 0;
    // i-1, j-1
    if (((i-1) >= 0) && ((j-1) >=0)){
        vec = vec + m[i-1][j-1];
    }
    // i-1, j
    if (((i-1) >= 0) && ((j) >=0)){
        vec = vec + m[i-1][j];
    }
    // i-1, j+1
    if (((i-1) >= 0) && ((j+1) < 6)){
        vec = vec + m[i-1][j+1];
    }
    // i, j-1
    if (((i) >= 0) && ((j-1) >= 0)){
        vec = vec + m[i][j-1];
    }
    // i, j+1
    if (((i) >= 0) && ((j+1) < 6)){
        vec = vec + m[i][j+1];
    }
    // i+1, j-1
    if (((i+1) <6 ) && ((j-1) >= 0)){
        vec = vec + m[i+1][j-1];
    }
    // i+1 , j
    if (((i+1) <6 ) && ((j) >= 0)){
        vec = vec + m[i+1][j];
    }
    // i+1, j+1
    if (((i+1) < 6 ) && ((j+1) < 6)){
        vec = vec + m[i+1][j+1];
    }
    return vec;
}