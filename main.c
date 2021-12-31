#include <stdio.h>
int main() {
	int A[50][50];
	int i, j, M, N;
	int size;
	int rowsum, columnsum, diagonalsum;
	int magic = 0;

	scanf("%d %d", &M, &N);
	if(M==N) {

		for(i=0; i<M; i++) {
			for(j=0; j<N; j++) {
				scanf("%d", &A[i][j]);
			}
		}
		
	
		
		diagonalsum = 0;
		for(i=0; i<M; i++) {
			for(j=0; j<N; j++) {
				if(i==j) {
					diagonalsum = diagonalsum + A[i][j];
				}
			}
		}
		
		
		for(i=0; i<M; i++) {
			rowsum = 0;
			for(j=0; j<N; j++) {
				rowsum = rowsum + A[i][j];
			}
			if(rowsum != diagonalsum) {
				printf("\nNo, Its not a magic square");
				return 0;
      
			}
		}
		
		
		for(i=0; i<M; i++) {
			columnsum = 0;
			for(j=0; j<N; j++) {
				columnsum =  columnsum + A[j][i];
			}
			if(columnsum != diagonalsum) {
				printf("\nNo, Its not a magic square");
				return 0;
			}
		}

		printf("\nYes, Its a magic square");
	} else {
		return 0;
	}
          }