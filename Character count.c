#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int n,c=0,cnt=0,size;
    printf("Enter the string: ");
    scanf("%s",s);
    size=strlen(s);
    printf("Enter no of frames: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter frame %d count",i+1);
        scanf("%d",&cnt);
        for(int j=c;j<c+cnt;j++){
            if(j<size){
                printf("%c",s[j]);
            }
            else{
                printf("\nString is over");
                return 0;
            }
        }
        printf("\n");
        c=c+cnt;
    }
}
