#include <stdio.h>
int main (){
    int a[10],n;
    printf("enter the value for n :");
    scanf("%d",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("displaying the value:");
    for(int i=0;i<n;i++){
        printf("the value %d",a[i]);
    }
    return 0;
}
