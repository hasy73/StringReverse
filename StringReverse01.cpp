#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[50]="",s1[50]="",c;
char end[]="END";
char clear[]=" ";
int main(void)
{
  while(strcmp(s,end)!=0){
  for(int i=0;s[i]!='\0';i++){
      strcat(clear," ");
  }
  strcpy(s,clear);strcpy(s1,clear);   //清空字串，未清空會發生延續前字串的內容的狀況                                        
  printf("請輸入一字串(輸入END結束)：");
  gets(s);                    
  for(int i=0,j=strlen(s)-1;i<=j;i++,j--){ //將S陣列最後一個內容值傳到新陣列S1中的第一個 
  c=s[i];
  s1[i]=s[j]; //前半段字串 
  s1[j]=c;    //後半段字串 
  }
  if(strcmp(s,end)!=0){
  printf("%s的反轉字串為%s\n",s,s1);
  }else{
  printf("");
  }
  }
  system("pause");
  }
