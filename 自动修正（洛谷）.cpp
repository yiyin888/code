#include<stdio.h>
#include<string.h>
int main(void){
    char a[100];
    scanf("%99s",a);
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='a'&&a[i]<='z'){
            a[i]=a[i]+'A'-'a';
        }
    }
    printf("%s",a);
    return 0;
}
