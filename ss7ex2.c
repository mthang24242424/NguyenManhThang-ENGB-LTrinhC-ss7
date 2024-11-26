#include<stdio.h>
int main(){
	int numbers[5];
	for(int i=0;i<5;i++){
		printf("nhap phan tu thu %d cho mang ",i+1);
		scanf("%d",&numbers[i]);
	}
	printf("gia tri cua mang vua nhap\n");
	for(int i=0;i<5;i++){
		printf("phan tu thu %d cua mang la %d \n",i+1,numbers[i]);
	}
	return 0;
}
