#include "bim.h"
#include <stdio.h>
#include <string.h>

int main() {

  int rulescheck = 0;
  char choicecheck = 0;
  char version[4] = "0.1";
  char date[9] = "22/10/17";

  printf("\n\nBim: Dr. Nim's Slacker Cousin");
  printf("\nA game by ACT");
  printf("\nCopyright 2022");
  printf("\nReleased under the GNU GPL 3.0");
  printf("\n\nVersion Alpha %s", version);
  printf("\n%s", date);

  do {

    while (1) {
      printf("\n\nWould you like to know the 'rules',\nor play the 'game'?\n");
      scanf("%s", &choicecheck);
      if (strcmp(&choicecheck, "rules") == 0 ||
          strcmp(&choicecheck, "game") == 0)
        break;
      else
        printf("\n\nError: must select through either typing 'rules', or "
               "typing 'game', and pressing enter");
    }

    switch (strcmp(&choicecheck, "game")) {
    case 0:
      game();
      rulescheck = 0;
      break;
    default:
      rules();
      rulescheck = 1;
      break;
    }

  } while (rulescheck != 0);

  return 0;
}
