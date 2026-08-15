#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void shuffle(char **arr, int n) {
  for (int i = n - 1; i > 0; --i) {
    int j = rand() % (i + 1);
    char *t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
  }
}

char *students[] = {"Juan Marcello",   "Hector Jimenez",
                      "Arthur Stain",    "Paulina Rodriguez",
                      "Kamala Harryson", "Joshua Gutierrez"};
char *roles[] = {"Live Developer", "Exercise Facilitator"};
int num_students = sizeof(students) / sizeof(students[0]);
int num_roles = sizeof(roles) / sizeof(roles[0]);

void selector() {
  system("clear");
  shuffle(students, num_students);
  puts(students[0]);
  printf("\n\n This is the student selected...");
  printf("\n\n This is the role selected...");
}

void aftr() {
  printf("\n\nWhat would you like to do?\n");
  printf("1 > Initialize Selector again\n");
  printf("2 > View students list\n");
  printf("3 > View available roles\n");
  printf("4 > Go back to main menu\n");
}

int main(void) {
  int loop = 1;
  srand((unsigned)time(NULL));

  while (loop == 1) {
    system("clear");
    printf("---------------------------\n");
    printf("-----Student Selection-----\n");
    printf("---------------------------\n\n");
    printf("1) Initialize Selector\n");
    printf("2) View students list\n");
    printf("3) View available roles\n");
    printf("q/Q) Quit program\n\n");

    char in_menu;
    scanf(" %c", &in_menu);

    switch (in_menu) {
    case '1':
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
      continue;
    }
  }

  return 0;
}
