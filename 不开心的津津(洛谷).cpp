#include<stdio.h>
int main(){
int i=0;
    int j=0;
    int n=0;
    int max=0;
    int cnt=0;
    int k=0;
    for(;n<7;n++){
        scanf("%d %d",&i,&j);
        if(i+j>8&&i+j>max){
                max=i+j;
                cnt=n+1;            
        }
    }
    if(cnt==0){
        printf("%d",0);
    }else{
        printf("%d",cnt);
    }
    
    return 0;
}
