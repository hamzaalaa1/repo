#ifndef DECK_H 
#define DECK_H
#include"Card.h"
class DeckOfCards
{
 public:
 DeckOfCards(Card);
 void push_back(Card); //put the card in the end of the deck vector 
 void shuffel();       //select random card and swap those cards 
 bool moreCards();     // return true if there is more cards in the deck 
 Card dealCard();      //return the next card in the deck
void print();
  private :
 Card deck[53];
 Card test ;
 int currentCard ;
 int backCard ;
};
#endif