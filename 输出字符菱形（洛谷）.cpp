#include <stdio.h>
int main() {
int i=-2;
int cnt=0; 
for(cnt=0;cnt<5;cnt++,i++){
   int n=(i<0)?-i:i;
	for(int j=0;j<n;j++){
		printf(" ");
	}
	for(int x=5-n*2;x>0;x--){
		printf("*");
	}
	printf("\n");

}
    return 0;
}
