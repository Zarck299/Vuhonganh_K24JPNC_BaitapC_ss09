#include<stdio.h>
   int main(){
   	int n,index, i, newValue;
   	int arr[50];
   	printf("Hay nhap so phan tu toi da cua mang: \n");
   	scanf("%d", &n);
   	if ( n > 50 || n <0) {
   		printf("So phan tu khong hop le! Vui long nhap lai\n");
   		return 0;
	   }
	printf("Hay nhap phan tu cua mang: \n");
	for (int i = 0; i<n; i++){
		printf("Phan tu %d: \n", i);
		scanf("%d", &arr[i]);
	}
	printf("Nhap vi tri can sua (0 den %d): ", n - 1);
    scanf("%d", &index);
    
    if (index < 0 || index >= n) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    arr[index] = newValue;

    printf("Mang sau khi sua:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
