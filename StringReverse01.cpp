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
  strcpy(s,clear);strcpy(s1,clear);   //�M�Ŧr��A���M�ŷ|�o�ͩ���e�r�ꪺ���e�����p                                        
  printf("�п�J�@�r��(��JEND����)�G");
  gets(s);                    
  for(int i=0,j=strlen(s)-1;i<=j;i++,j--){ //�NS�}�C�̫�@�Ӥ��e�ȶǨ�s�}�CS1�����Ĥ@�� 
  c=s[i];
  s1[i]=s[j]; //�e�b�q�r�� 
  s1[j]=c;    //��b�q�r�� 
  }
  if(strcmp(s,end)!=0){
  printf("%s������r�ꬰ%s\n",s,s1);
  }else{
  printf("");
  }
  }
  system("pause");
  }
