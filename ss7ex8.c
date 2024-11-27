#include<stdio.h>
int main(){
	int row,col;
	printf("nhap so hang cua mang ");
	scanf("%d",&row);
	printf("nhap so cot cua mang ");
	scanf("%d",&col); 
	int number[row] [col];
	for(int i=0; i<row; i++){ // nhap phan tu cho mang  
		for(int j=0; j<col; j++){
			printf("number[%d][%d] = ",i,j);
			scanf("%d",&number[i][j]); 
		} 
	}
	for(int i=0; i<row; i++){ // in phan tu  
	for(int j=0; j<col; j++){
		printf(" %d",i,j,number[i][j]);
		} 
		printf("\n");  
	}
	return 0; 
}
