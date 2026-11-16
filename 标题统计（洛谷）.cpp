#include<stdio.h>
#include<string.h>
int main(void){
    char a[6];
    for(int i=0;i<5;i++){
        scanf("%c",&a[i]);
    }
    int c=strlen(a);
    int sum=0;
    for(int i=0;i<c;i++){
        if(a[i]==' '||a[i]=='\n'){
            continue;
        }
        sum++;
    }
    printf("%d",sum);
    return 0;
}
