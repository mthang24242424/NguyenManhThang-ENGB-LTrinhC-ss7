#include <stdio.h>
int main() {
    int n;
    int count=0; // dem so nguyen to  
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("ko hop le \n");
        return 1;
    }
    int numbers[n];
    for (int i = 0; i < n; i++) {
        printf("nhap phan tu %d cua mang: ",i+1);
        scanf("%d", &numbers[i]);
    }
    printf("cac so nguyen to trong mang:\n");
    for (int i = 0; i < n; i++) {
        int num = numbers[i];
        if (num < 2) continue; 
        int prime= 1; //check so nguyen to 1 la dung 0 la sai
        for (int j=2; j*j<=num; j++) { 
            if (num % j == 0) {
                prime = 0; 
                break;
            }
        }
        if (prime==1) {
            printf("%d ", num); 
            count++; 
        } 
		}
	 if(count==0) {
        	printf("ko co so nguyen to trong mang ");
    }
    return 0;
}
