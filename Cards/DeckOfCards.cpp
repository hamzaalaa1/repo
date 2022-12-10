#include"DeckOfCards.h"
#include <iostream>
#include <cstdlib>
#include<time.h>
 
DeckOfCards::DeckOfCards(Card a):currentCard(1),backCard(1)
{
  push_back(a);
}
void DeckOfCards::push_back(Card c)
{
   if(backCard >= 53)
   {
    return ;
   } 
   deck[backCard++] = c ; 
}
void DeckOfCards::shuffel()
{
    Card Temp ;  
   
    for(int i = 1 ; i < 53 ; i++)
    {
      int Rvalue   = 1 + rand()%52;
      Temp         = deck[i];
      deck[i]      = deck[Rvalue];
      deck[Rvalue] = deck[i];
    }
}
Card DeckOfCards::dealCard()
{
  return deck[currentCard++];
}
bool DeckOfCards::moreCards()
{
  return (currentCard >52 )?false : true ;
}
void DeckOfCards::print()
{
 for(int i = 1 ; i < 53 ; i++)
 {
  cout<<deck[i].toString()<<"\n";
 }
}