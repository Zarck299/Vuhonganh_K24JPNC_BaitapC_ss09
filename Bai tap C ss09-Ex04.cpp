#include <stdio.h>

int main(){
	int arr[50];
	int kiTu,maxSize,index,choice;
	
	printf("\tMENU\n");
	printf("1.Nhap phan tu vao mang\n");
	printf("2.Hien thi mang\n");
	printf("3.Them phan tu vao mang\n");
	printf("4.Sua phan tu trong mang\n");
	printf("5.Xoa phan tu trong mang\n");
	printf("6.Thoat chuong trinh\n");
	
	for(int i=0;i<=6;i++){
		printf("Hay chon mot che do ban muon: \n");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("Ban muon nhap mang co bao nhieu phan tu: \n");
				scanf("%d",&maxSize);
				if (maxSize > 0 && maxSize < 50){
					for(int i=0;i<maxSize;i++){
					printf("Moi ban nhap : ");
					scanf("%d",&arr[i]);
					}
				}else ("ERROR. So phan tu vuot qua gia tri quy dinh! Vui long nhap lai");
					break;
			case 2:
				if (maxSize > 0) {
                    printf("Cac phan tu trong mang la: \n");
                    for (int i = 0; i < maxSize; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                } else {
                    printf("Mang hien tai rong.\n");
                }
                break;	
			case 3: 
				if (maxSize >= 50 && maxSize < 0){
					printf("ERROR. Khong the them gia tri vi mang da day! \n");}
				else
				{
				printf("Hay nhap phan tu ban muon them: ");
				scanf("%d",&kiTu);
				printf("Ban muon them gia tri nay vao vi tri: ");
				scanf("%d",&index);
				if (index > 0 && index <= 50){
					for(int i=maxSize;i>index;i--){
					arr[i]=arr[i-1];}
				arr[index]=kiTu;
				for(int i=0;i<maxSize+1;i++){
					printf(" %d ",arr[i]);}
				}
				break;
			case 4:
			if (maxSize > 0) {
                    printf("Ban muon sua gia tri o vi tri: \n");
                    scanf("%d", &index);
                    if (index >= 0 && index < maxSize) {
                        printf("Nhap gia tri moi: ");
                        scanf("%d", &kiTu);
                        arr[index] = kiTu;
                        printf("Sua gia tri thanh cong!\n");
                    } else {
                        printf("ERROR. Vi tri khong hop le!\n");}
                } else {
                    printf("Mang hien tai rong.\n");}
                break;
			case 5:
				if (maxSize > 0) {
                    printf("Hay nhap vi tri cua phan tu muon xoa: ");
                    scanf("%d", &index);
                    if (index >= 0 && index < maxSize) {
                        for (int i = index; i < maxSize - 1; i++) {
                            arr[i] = arr[i + 1];}
                        maxSize--;
                        printf("Xoa phan tu thanh cong!\n");
                    } else {
                        printf("ERROR. Vi tri khong hop le!\n");}
                }
			else {
                    printf("Mang hien tai rong.\n");}
                break;
			case 6:
				printf("\nKet thu chuong trinh");
				return 0;						
		}
	}
} 
	return 0;
}
