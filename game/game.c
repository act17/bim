#include <stdio.h>

void game() {

  int sum = 1;
  int playerinput;

  for (int rounds = 1; sum < 100; rounds++) {

    printf("\n\nRound %d\nThe sum is %d.", rounds, sum);

    while (1) {
      printf("\nInput your number and press return: ");
      scanf("%d", &playerinput);
      if (playerinput > 0 && playerinput < 11)
        break;
      else
        printf("\nYour input is greater/less than the limits! (Must be above "
               "0, and below 11.)");
    }

    printf("Bim chooses %d.", 11 - playerinput);
    sum = sum + playerinput + (11 - playerinput);
  }

  // This is mathematically impossible, but, might as well add it :^)
  if (sum > 100)
    printf("\n\nYou won! (Somehow.)");
  else
    printf("\n\nBim has added the final amount to create %d. Bim wins!", sum);
  return;
}
