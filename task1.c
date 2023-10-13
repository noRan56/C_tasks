
#include<stdio.h>
#include<string.h>


int main(void){
 
 char userName[20];
 char password[8];
  printf("\n Enter Your UserName : ");
  scanf("%s",userName);
  printf("\n Enter Your PassWord : ");
  scanf("%s",password);


  if(strcmp(userName, "Noran")==0 && strcmp(password ,"123456")==0){
      
          printf("Login -> success");
      
     
  }else{
      printf("\n Wrong password or userName");
       
   
  }
//   getch();
  return 0;
}