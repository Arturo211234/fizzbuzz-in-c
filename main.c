#include <stdio.h>
#define FIZZNUM 3
#define BUZZNUM 5
#define MAXLENGTH 8
#define B 66
#define F 70
#define I 73
#define U 85
#define Z 90



int main(){
 char output[MAXLENGTH];
 output[0] = "";
 int current = 0;
 for (int i = 0; i <= 100; i++){
     if(i % FIZZNUM == 0 && i != 0) {output[current] = F; output[current+1] = I; output[current+2] = Z; output[current+3] = Z; current +=4;}
     if(i % BUZZNUM == 0 && i !=0) {output[current] = B; output[current+1] = U; output[current+2] = Z; output[current+3] = Z; current +=4;}
     output[current] = '\n'; output[current+1]='\0';
     if(current == 0) {printf("%d", i);}
     printf("%s", output);
     for(int j = 0; j<MAXLENGTH; j++){
         output[j]="";
     }
     current = 0;
 }
 
 
 return 0;
} 
