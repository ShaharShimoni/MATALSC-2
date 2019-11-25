#include <stdio.h>
#include "myBank.h"

int main(){
char option[2]={'!','!'};
int status=0;

printf("Hey there! welcome to shaharivka's bank. Here are your following options:\n");
printf("O-opens a new bank account\n");
printf("B-Balance inquiry\n");
printf("D-deposite money in to an account\n");
printf("C-close an account\n");
printf("I-adding interest\n");
printf("P-prints all open accounts\n");
printf("E-closing all acoount and shut down the program\n");
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
    