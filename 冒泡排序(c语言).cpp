#include<stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	int a[n];
	int t;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		int p=0;
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				p=1;
			}
		}
		if(p==0){
			break;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
		
	}
	return 0;
}
