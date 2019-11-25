#include <stdio.h>
#include "myBank.h"

int main(){

int status=0;
char option;
printf("Hey there! welcome to shaharivka's bank. Here are your following options:\n");
printf(".O,I,P,E,C?....\n");
while(status==0){
    printf("enter your request:");
    scanf(" %c",&option);
    //option = getchar();
    switch(option){
        
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
    