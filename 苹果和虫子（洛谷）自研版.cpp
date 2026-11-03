#include<stdio.h>
int main(void){
    int m,t,s;
    scanf("%d %d %d",&m,&t,&s);
    if(t==0||m-s/t<=0){
        printf("0");
    }else if(s%t!=0){
       printf("%d",m-s/t-1);
    }else{
        printf("%d",m-s/t);
    }
    return 0;
}
