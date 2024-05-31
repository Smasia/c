// structures
#include <stdio.h>

struct card {
  const char *face;
  const char *suit;
};

typedef struct card Card;

int main(void)
{

  struct card myCard;
  struct card *myCardPtr;

  myCardPtr = &myCard;
  myCard.suit = "Spade";
  myCard.face = "Queen";

  printf("\n%s ", myCard.face);
  printf("%s\n", myCard.suit);
  printf("\n%s ", myCardPtr->face);
  printf("%s\n", myCardPtr->suit);

  Card urCard;
  Card *urCardPtr = &urCard;
  urCard.face = "King";
  urCard.suit = "Heart";
  printf("\n%s ", urCard.face);
  printf("%s\n", urCard.suit);
  
}
