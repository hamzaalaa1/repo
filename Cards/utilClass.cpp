#include"utilClass.h"

bool UtilClass::pair(Card *arrCards)
{
 for(int i = 0 ; i < 5 ; i++)
  for(int j = i+1 ; j < 5 ;j++ )
     if(arrCards[i].getFace() == arrCards[j].getFace())
     return true;
    return false;
}
bool UtilClass::twoPairs(Card *arrayCards)
{
  Card newTemp[5] ;
  for(int i = 0 ; i < 5 ; i++)
  newTemp[i] = arrayCards[i];
   
    
  for(int i = 0 ; i < 5 ; i++)
  {
    for(int j = i+1 ; j < 5 ; j++)
    {
        if(newTemp[i].getFace() == -1)
        continue;
        else{
            if(newTemp[i].getFace() == newTemp[j].getFace())
            {
                newTemp[j].setFace(-1);
                break;
            }
        }
    }
  }    
  for(int i = 0 , count = 0; i < 5 ; i++ )
  {
    if(newTemp[i].getFace() == -1)
    count++;

    if(count >= 2)
    return true;
  }
  return false;
}
bool UtilClass::threeOfKind(Card *arrayCards)
{
   for(int i = 0 , count = 0; i < 5 ; i ++)
   {
    if(arrayCards[i].getFace() >= 10)
    count++;
    if(count >= 3)
    return true ; 
   }
   return false ;
}
bool UtilClass::fourOfkind(Card *arrayCards)
{
   for(int i = 0 , count = 0; i < 5 ; i ++)
   {
    if(arrayCards[i].getFace() >= 10)
    count++;
    if(count >= 4)
    return true ; 
   }
   return false ;
}

bool UtilClass::flush(Card *arrayCards)
{
  int count = 0;
 for(int i = 1 ; i < 5 ; i ++)
 {
   if(arrayCards[i].getSuit() == arrayCards[0].getSuit())
   {
    count ++;
   }
 }
 if(count == 4)
 return true;
 else 
 return false;
}
bool UtilClass::straight(Card *arrayCards)
{
  bool flag = true ; 
  for(int i = 0 ; i < 4  ; i++)
  {
    if(arrayCards[i].getFace()+1 == arrayCards[i+1].getFace())
    continue;
    else
    flag = false ;
  }
  if(flag)
  return true ;
  else 
  return false ;
}