#include<stdio.h>
int main(){
	int numbers[5] = {2,4,6,8,20};
	int size = sizeof(numbers)/sizeof(int);
	for(int i=0;i<5;i++){
		printf("gia tri thu %d cua mang la %d \n",i+1,numbers[i]);
	}
	printf("kich thuoc cua mang la %d",size);
	return 0; 
} 
