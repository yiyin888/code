#include<stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	int a[n];
	int t;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		int t;
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}	
	
	return 0;
}
