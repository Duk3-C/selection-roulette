#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int loop = 1;

void shuffle(char **arr, int n) {
  for (int i = n - 1; i > 0; --i) {
    int j = rand() % (i + 1);
    char *t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
  }
}

char *students[] = {"Juan Marcello",     "Hector Jimenez",  "Arthur Stain",
                    "Paulina Rodriguez", "Kamala Harryson", "Joshua Gutierrez"};
char *roles[] = {"Live Developer", "Exercise Facilitator"};
int num_students = sizeof(students) / sizeof(students[0]);
int num_roles = sizeof(roles) / sizeof(roles[0]);

void selector() {
  shuffle(students, num_students);
  sleep(1);
  printf("\n\n Selected student: %s", students[0]);
  shuffle(roles, num_roles);
  sleep(1);
  printf("\n\n Your student's role: %s", roles[0]);
}

void aftr() {
  sleep(1);
  printf("\n\nWhat would you like to do?\n");
  printf("1 > Initialize Selector again\n");
  printf("2 > View students list\n");
  printf("3 > View available roles\n");
  printf("q/Q > Quit program\n");

  printf("Answer: ");
  char in_menu;
  scanf(" %c", &in_menu);

  switch (in_menu) {
  case '1':
    sleep(1);
    selector();
    aftr();
  case '2':
    printf("\n\n");
    for (int i=0; i<num_students; ++i)
    {
      printf("%s\n", students[i]);
    }
    aftr();
  case '3':
    printf("\n\n");
    for (int i=0; i<num_roles; ++i)
    {
      printf("%s\n", roles[i]);
    }
    aftr();
  case 'q':
    break;
  case 'Q':
    break;
  default:
    printf("Invalid Answer, please enter a given option\n");
    aftr();
  }
}

int main(void) {
  srand((unsigned)time(NULL));

  system("clear");
  printf("---------------------------\n");
  printf("-----Student Selection-----\n");
  printf("---------------------------\n\n");
  printf("1) Initialize Selector\n");
  printf("2) View students list\n");
  printf("3) View available roles\n");
  printf("q/Q) Quit program\n\n");

  printf("Answer: ");
  char in_menu;
  scanf(" %c", &in_menu);

  switch (in_menu) {
  case '1':
    sleep(1);
    selector();
    aftr();
  case '2':
  case '3':
  case 'q':
    loop = 0;
    break;
  case 'Q':
    loop = 0;
    break;
  default:
    printf("Invalid Answer, try again");
    main();
  }

  return 0;
}
