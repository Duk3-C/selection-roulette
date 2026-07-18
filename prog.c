#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

srand(time(NULL));

int main(int argc, char *argv[])
{

  bool loop = true;

  while( loop )
  {
    char in_menu;
    scanf("%s", &in_menu);

    if(in_menu == "1")
    {

    } 
    else if(in_menu == "q" || in_menu == "Q")
    {
      printf("Exiting the program...\n");
      loop = false;
    }
    else {
      printf("Invalid Answer\n");
      continue;
    }
    
  };
  return 0;

}

