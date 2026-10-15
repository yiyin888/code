#include<stdio.h>
int main(){
int l,r;
    int i;
    int cnt=0;
 	scanf("%d %d",&l,&r);

    for(;l<=r;l++){
        i=l;
        while(i>0){
			if(i%10==2){
				cnt++;
			}
			i/=10;
        }
    }
  printf("%d",cnt);
    return 0;
}
