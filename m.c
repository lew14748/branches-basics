#include <stdio.h>

int main()
{
	int a = 4, b = 4, c = 4;
	int matrix1[a][b];
	int matrix2[b][c];
	int matrixres[a][c];
	int i, j;

	FILE *file = fopen("matrix1.txt", "rt");
	for(i = 0; (i < a) && !feof(file); i++) {
		for(j = 0; (j < b) && !feof(file); j++){
		fscanf(file, "%d", &matrix1[i][j]);
		printf("%d", matrix1[i][j]);
		}
	}
	return 0;
}
