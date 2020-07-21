#include <stdio.h>
#define FIZZNUM 3
#define BUZZNUM 5
#define MAXLENGTH 10


char giveLetter(int inp){
 return ((inp == 1) * 70) + (((inp == 2) * 1) * 73) + ((inp == 3) * 66) + ((inp == 4) * 85) + ((inp == 5)*90);

}


int main(){
 char output[MAXLENGTH];
 output[0] = "";
 int current = 0;
 for (int i = 0; i <= 100; i++){
     if(i % FIZZNUM == 0 && i != 0) {output[current] = giveLetter(1); output[current+1] = giveLetter(2); output[current+2] = giveLetter(5); output[current+3] = giveLetter(5); current +=4;}
     if(i % BUZZNUM == 0 && i != 0) {output[current] = giveLetter(3); output[current+1] = giveLetter(4); output[current+2] = giveLetter(5); output[current+3] = giveLetter(5); current +=4;}
     output[current] = '\n'; output[current+1]='\0';
     if(current == 0) {printf("%d", i);}
     printf("%s", output);
     for(int j = 0; j<MAXLENGTH; j++){
         output[j]="";
     }
     current = 0;

  
  //This is overly complicated. If you want something simpler, try replacing the code in the loop with:
  //if(i%FIZZNUM==0 && i !=0) {printf("Fizz");}
  //if(i%BUZZNUM==0 && i !=0) {printf("Buzz");}
  //if(i%BUZZNUM != 0 && i%FIZZNUM != 0) {printf("%d", i);}
  //printf("\n");
  
 
 }
 
 
 return 0;
} 
