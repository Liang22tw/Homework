#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
	const char *face;
	const char *suit;
}Card;

//typedef struct card Card;

void fillDeck(Card * const wDeck, const char *  wFace[], const char * wSuit[]);
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck);

int main(void)
{
	Card deck[52];
	const char *face[] = { "Ace","Deuce","Three","Four","Five","Six","Seven","Eight","nine","Ten","Jack","Queen","King" };
	const char *suit[] = { "Hearts","Diamonds","Clubs","Spades" };

	srand(time(NULL));

	fillDeck(deck, face, suit);
	shuffle(deck);
	deal(deck);

	return 0;
}

void fillDeck(Card * const wDeck, const char *  wFace[], const char * wSuit[])
{
	for (int i = 0; i < 52; i++) {
		wDeck[i].face = wFace[i % 13];
		wDeck[i].suit = wSuit[i / 13];
	}
}

void shuffle(Card * const wDeck)
{
	int j;
	Card temp;

	for (int i = 0; i < 52; i++) {
		j = rand() % 52;
		temp = wDeck[i];
		wDeck[i] = wDeck[j];
		wDeck[j] = temp;
	}
}

void deal(const Card * const wDeck)
{
	for (int i = 0; i < 52; i++)
		printf("%6s of %-10s%s", wDeck[i].face, wDeck[i].suit, (i + 1) % 4 ? " " : "\n");
}