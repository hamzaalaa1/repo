
#ifndef CARDS_H
#define CARDS_H
#include<iostream>
#include <string>
using namespace std ;
 class Card
{
    public :
    // Card(int = 0, int = 0);
     string toString();
     void setSuit(int);
     void setFace(int);
     int getFace();
     int getSuit();
     
     private :
     int Face ; 
     int Suit ; 
     static  string face[13];
     static  string suit [4];
};
#endif