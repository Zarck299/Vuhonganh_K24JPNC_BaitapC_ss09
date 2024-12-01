#include <stdio.h>

int main() {
    int currentLength = 0;
    int n, removeIndex;
    const int maxSize = 100;

    printf("Hay nhap so phan tu cua mang ( max = %d): ", maxSize);
    scanf("%d", &n);

    if (n > maxSize || n <= 0) {
        printf("So phan ban nhap vao khong hop le!\n");
        return 0;
    }

    int arr[maxSize]; 

    printf("Hay nhap vao cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    currentLength = n;

    printf("Hay nhap vi tri ban muon xoa (0 toi %d): \n", currentLength - 1);
    scanf("%d", &removeIndex);

    if (removeIndex < 0 || removeIndex >= currentLength) {
        printf("Vi tri ban chon khong hop le!\n");
        return 0;
    }

    for (int i = removeIndex; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }
    currentLength--;
    printf("Mang sau khi xoa phan tu:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

