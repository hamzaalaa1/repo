#ifndef UTILCLASS_H
#define UTILCLASS_H
#include"Card.h"
class UtilClass 
{
    public:
static bool pair(Card *);
static bool twoPairs(Card *);
static bool threeOfKind(Card *);  
static bool fourOfkind(Card *);
static bool flush(Card *);
static bool straight(Card *);  
void utilFunction(Card *);

private : 
 int frqFaces[13];
 int frqSuit[4];
};
#endif 