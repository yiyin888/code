#include <stdio.h>
 int up(int arr[50],int n);
 int down(int arr[],int n);
int main() {
    int a=0,b=0;
    int arr[50] = { 0 };
    // Write your code here
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   a=up(arr,n);
   b=down(arr,n);
   if (n==1){
       printf("Yes");
   }else if(a||b){
       printf("Yes");
   }else{
       printf("No");
   }
}

    int up(int arr[50],int n)
    {
     for(int i=0;i+1<n;i++){
         if(arr[i]>arr[i+1]){
             return 0;
         }
     }
     return 1;
    }
    int down(int arr[],int n)
    {
        for(int i=0;i+1<n;i++){
            if(arr[i]<arr[i+1]){
                return 0;
            }
        }
        return 1;
    }
