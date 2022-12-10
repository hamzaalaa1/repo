#include<iostream>
#include"DeckOfCards.h"
#include"Card.h"
#include"utilClass.h"
using namespace std ;
int main()
{ 
  int rate1 = 0, reate2 = 0 ;  
  srand(time(0));
  Card c; 
  Card Boker[5] ,Boker2[5];
  DeckOfCards Deck1(c);
  
    for(int face = 0 ; face < 13 ;face++)
  for(int suit = 0 ; suit < 4  ; suit++)
  {
    c.setFace(face);
    c.setSuit(suit);
    Deck1.push_back(c);
  }
  Deck1.shuffel(); 
 
  for(int i = 0 ; i < 10  ;)
  {
          Boker[i++]  = Deck1.dealCard();
          Boker2[i++] = Deck1.dealCard();
  }
    for(int i = 0 ; i < 5  ;i++)
  {
          cout<<Boker[i].toString()<<"\t\t\t"<<Boker2[i].toString()<<endl;
  }
  if(UtilClass::flush(Boker))
  rate1++;
  if(UtilClass::fourOfkind(Boker))
  rate1++;
  if(UtilClass::pair(Boker))
  rate1++;
  if(UtilClass::straight(Boker))
  rate1++;
  if(UtilClass::threeOfKind(Boker))
  rate1++;
  if(UtilClass::twoPairs(Boker))
  rate1++;

   if(UtilClass::flush(Boker2))
  reate2++;
  if(UtilClass::fourOfkind(Boker2))
  reate2++;
  if(UtilClass::pair(Boker2))
  reate2++;
  if(UtilClass::straight(Boker2))
  reate2++;
  if(UtilClass::threeOfKind(Boker2))
  reate2++;
  if(UtilClass::twoPairs(Boker2))
  reate2++;
  
  if(rate1 > reate2)
  cout<<"first hand is more powerful\n";
  else if(rate1 < reate2)
  cout<<"secound hand is more powerful \n";
  else 
  cout <<"both are equal\n";
 }
