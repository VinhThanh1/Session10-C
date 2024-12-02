#include<stdio.h>
int main(){
	int arr[6]={3,6,1,2,7,8,};
	for(int i=0;i<6;i++){
		int key=arr[i]; // lay phan tu hien tai lam key
		int j=i-1; // chi so cua phan tu truoc key
		while(j>=0 && arr[j] > key){
			arr[j+1]=arr[j]; // dich chuyen phan tu lon hon sang phai
			j--; // giam chi so j
		}
		arr[j+1]=key; // chen key vao dung vi tri
	}
	for(int i=0;i<6;i++){
		printf("%d",arr[i]);
	}
}
