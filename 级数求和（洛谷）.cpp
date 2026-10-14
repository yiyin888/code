#include<stdio.h>
int main()
{
int k;
double sum=0.0;
    scanf("%d",&k);
    int i=0;
    for(i=0;sum<=k;i++){
        sum+=1.0/(i+1);
    }
    printf("%d",i);
    return 0;
}
