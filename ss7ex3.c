#include<stdio.h>
int main(){
	int numbers[5];
	int count=0;
	for(int i=0;i<5;i++){
		printf("nhap phan tu thu %d cho mang ",i+1);
		scanf("%d",&numbers[i]);
	}
	printf("----------------\n");
	for(int i=0;i<5;i++){
		if(numbers[i]%2==0){
			printf("phan tu thu %d cua mang la so chan = %d \n",i+1,numbers[i]);
			count++;
		}
	}
	if(count==0){
		printf("mang ko co so chan");
	}
	return 0;
}
