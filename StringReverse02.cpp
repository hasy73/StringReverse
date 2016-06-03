/* StringReverse045.cpp */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char str[100],b;
    int i, a=0;
    fflush(stdin);
    printf("請輸入一個字串(輸入End結束):");
    gets(str);
    char end[]="End";
    char str2[100];
    strcpy(str2,str);
    
    while(strcmp(str,end)!=0) {
          fflush(stdin);
          strcpy(str2,str);
          while (str[a]!='\0')  
                a++;
                for (i=0;i<a/2;i++){
                    b=str[i]; 
                    str[i]=str[(a-1)-i];
                    str[(a-1)-i]=b;    
                    }
          fflush(stdin);  
          printf("%s的反轉字串為%s\n",str2,str);
          fflush(stdin);
          printf("請輸入一個字串(輸入End結束):");
          fflush(stdin);
          gets(str);   
    }
    printf("");
    system("pause");
    return 0; 
}
