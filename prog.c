#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

void shuffle(char **arr, int n)
{
  for (int i = n - 1; i > 0; --i) 
  {
    int j = rand() % (i + 1);
    char *t = arr[i]; arr[i] = arr[j]; arr[j] = t; 
  }
}

int main(int argc, char *argv[])
{
  int loop = TRUE;
  srand(time(NULL));

  char *students[] = {"Juan Marcello", "Hector Jimenez", "Arthur Stain", "Paulina Rodriguez", "Kamala Harryson", "Joshua Gutierrez"};
  char *roles[] = {"Live Developer", "Exercise Facilitator"};
  const char* selector_buffer[4];

  int num_students = sizeof(students) / sizeof(students[0]);
  int num_roles = sizeof(roles) / sizeof(roles[0]);  

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
        for (int i=0; i>num_students; ++i) 
        {  
          shuffle(students, num_students);
          printf("%s\n", students[i]);
        }
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

