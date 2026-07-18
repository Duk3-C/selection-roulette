#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char *argv[])
{
  int loop = TRUE;
  srand(time(NULL));

  char students[] = {"Juan Marcello", "Hector Jimenez", "Arthur Stain", "Paulina Rodriguez", "Kamala Harryson", "Joshua Gutierrez"};

  while (loop) 
  {
    printf("---------------------------\n"); 
    printf("-----Student Selection-----\n"); 
    printf("---------------------------\n\n"); 
    printf("1) Initialize Selector\n");
    printf("2) View students list\n");
    printf("3) View available roles\n");
    printf("q/Q) Quit program\n\n");

    char in_menu;
    scanf("%c", &in_menu);

    switch (in_menu) 
    {
      case 1:
      case 2:
      case 3:
      case 'q':
        loop = FALSE;
      case 'Q':
        loop = FALSE;
      default:
        printf("Invalid Answer, try again");
        continue;
    }
  }

  return 0;

}

