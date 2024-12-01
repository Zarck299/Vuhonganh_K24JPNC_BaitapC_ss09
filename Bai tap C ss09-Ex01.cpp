#include<stdio.h>
   int main(){
   	int currentLength = 0;
   	int n,value, addIndex;
   	int maxSize = 100;
   	
   	printf("Hay nhap so phan tu cua mang(So luong toi da)\n");
   	scanf("%d", &n);
   	if(n > maxSize || n < 0){
   		printf("So phan tu ban yeu cau khong hop le.Vui long nhap lai!\n");
   		return 0;
	   }
	printf("Nhap cac phan tu cua mang:\n");
	int arr[maxSize];
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    currentLength = n;
	printf("Hay nhap cac phan tu cua mang: \n");
	scanf("%d", &value);
	printf("Hay nhap vi tri ban muon chen gia tri: \n");
	scanf("%d", &addIndex);
	if (addIndex >= currentLength) {
        arr[addIndex] = value;
        currentLength = addIndex + 1;
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = value;
        currentLength++;
    }
     printf("Mang sau khi them phan tu:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
