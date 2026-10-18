#include<stdio.h>
int main(){
int cnt=0;
int i=0;
int k=0;

        for(i=2;cnt<2025;i++){
            int a=1;
            for(int k=2;k<i;k++){
                if(i%k==0){
                    a=0;
                    break;
                }
            }
            if(a==1){
                cnt++;
            }
            if(cnt==2025){
                break;
            }
        } 
printf("%d",i);
    return 0;
}
