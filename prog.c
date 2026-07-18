#include <stdio.h>
#include <string.h>
#include <time.h>

srand(time(NULL));

char students[] = { "Francisco Ortega", "Mauricio Divan", "Alex Magnus", "Diana Herrera", "Stephen Harrison", "Angelo Frazzani", "Charles Hamilton" };
char roles[] = { "Live Developer", "Exercise Facilitator" };  


void *Selector(char &students[], char &roles[])
{
  char selection_buffer[4];
  char selected_student[] = rand(&students) + 1;
  char selected_role[] = rand(&roles) + 1;

  char result[] = selected_student + selected_role;

  for(int i=0; i<2; ++i)
  {
    printf(selection_buffer, "%s\n", result);
    printf(selection_buffer, "%s\n", result);
    if(strcmp(selection_buffer, result) == 0)
    {
      
    }
  }
}

int main(int argc, char *argv[])
{

  bool loop = true;

    while( loop )
  {
    printf("
        -----------------------------------\n 
        ----- Role Selection Roulette -----\n
        -----------------------------------\n\n
        ");

    printf("
        1 - Select roles for students\n 
        Q/q - Quit program\n\n
        ");

    char in_menu;
    scanf("%s", &in_menu);

    if(in_menu == "1")
    {
      liveDev(); 
    } 
    else if(in_menu == "q" || in_menu == "Q")
    {
      printf("Exiting the program...\n");
      exit(EXIT_SUCCESS);
    }
    else {
      printf("Invalid Answer\n");
      continue;
    }
    
  };
  return 0;

}

