#include <stdio.h>
#include <stdlib.h>
#include "myBank.h"



int main(int argc, char const *argv[])
{
    

char current_char;
 char line[256];



    printf("\nTransaction type ?");

while (current_char!='E')
{
   if (fgets(line, sizeof line, stdin) == NULL) {
        printf("Input error.\n");
        exit(1);
    }
    current_char = line[0];
    
switch (current_char)
{
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
    break;

default:
  printf("\nTransaction type ?");
        break;
}





}








    return 0;
}
