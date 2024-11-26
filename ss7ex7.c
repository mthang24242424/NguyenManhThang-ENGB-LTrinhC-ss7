#include<stdio.h>
int main(){
	int n,numbers[n];
	printf("nhap so phan tu cua mang ");
	scanf("%d",&n);
	numbers[n];
	int i=0; 
	while(i<n){
		printf("nhap phan tu thu %d cho mang ",i);
		scanf("%d",&numbers[i]);
		if(numbers[i]%2!=0){
			i++; 
		} 
	}
	return 0; 
} 
