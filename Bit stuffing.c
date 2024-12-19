#include <stdio.h>
#include <string.h>
int main(){
    char s[100],b[120],d[100];
    int i=0,j=0,cnt=0;
    printf("Enter string: ");
    scanf("%s",s);
    printf("The original string is %s%s%s\n","01111110",s,"01111110");
    for(i=0;i<strlen(s);i++){
        if(s[i]=='1'){
            cnt++;
            b[j++]=s[i];
        }
        else{
            cnt=0;
            b[j++]=s[i];
        }
        if(cnt==5){
            b[j++]='0';
        }
    }
    b[j]='\0';
    printf("The bestuffed string is %s%s%s\n","01111110",b,"01111110");
    cnt=0;
    j=0;
    for(i=0;i<strlen(b);i++){
        if(cnt==5){
            cnt=0;
            continue;
        }
        if(b[i]=='1'){
            cnt++;
            d[j++]=b[i];
        }
        else{
            cnt=0;
            d[j++]=b[i];
        }
    }
printf("The destuffed string is %s%s%s\n","01111110",d,"01111110");
   
}
