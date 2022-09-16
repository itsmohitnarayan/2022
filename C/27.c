#include <stdio.h>
#include<stdlib.h>
void main(){
    int w=0,l=0,c=0;
    char* sen= (char*)malloc(7*sizeof(char*));
    scanf("%[^~]", sen);
    while (*sen!='\0')
    {
        w += (*sen==' ');
        l += (*sen=='\n');
        c ++;
        sen++;
    }
    printf("The document has %d lines, %d words and %d characters",l+1,w+1+l,c-(l+w));
}