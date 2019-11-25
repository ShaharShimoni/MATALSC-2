#include <stdio.h>
#include "myBank.h"

int main(){
char option[2]={'!','!'};
int status=0;

printf("Hey there! welcome to shaharivka's bank. Here are your following options:\n");
printf(".O,I,P,E,C?....\n");
while(status==0){
   printf("enter your request:");
   scanf(" %s",option); 
   while(option[1]!='\0'){
    printf("ERROR!,this is more then one letter, please enter again\n");
    scanf(" %s",option); 
   }
    

    switch(option[0]){
        
        case 'O':
         o(); 
        break;

        case 'B':
         b();
        break;
        
        case 'D':
         d();
        break;

        case 'W':
         w();
        break;
      

        case 'C':
         c();
        break;

        case 'I':
         i();
        break;

        case 'P':
         p();
         break;

        case 'E':
         e();
         status=1;
        break;

         default:
         printf("ERROR!,this is not one of the options, please enter again\n");
         
         break;

        

        
    }


    }
    return 0;


    }
    