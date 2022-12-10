   #include"Card.h"
   
   string  Card::face[13] = { "Ace", "Deuce", "Three", "Four","Five", "Six", "Seven", "Eight","Nine", "Ten", "Jack", "Queen", "King"};
   string  Card::suit [4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
  

  // Card::Card(int f , int s)
 //  {
   //    setFace(f);
   //    setSuit(s);
  // }
   void Card::setFace(int f)
   {
    Face = f ; 
   }
   void Card::setSuit(int s)
   {
    Suit = s;
   }
   int Card::getFace()
   {
    return Face; 
   }
   int Card::getSuit()
   {
    return Suit ;
   }
   string Card::toString()
  {
      return face[Face] + " of " + suit[Suit] ; 
   }    