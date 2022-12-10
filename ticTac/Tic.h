#ifndef TIC_H
#define TIC_H 
class TicGame {
  public :
          TicGame();
          void master();//not implemented 
          bool checkP(int , int);//implemented 
          void putPlay(int ,int ,int P);//implemented 
          int  checkWin();//implemented 
          void winerX();//
          void winerO();//
          void player1();//implemented ;
         	 void player2();//implemented ;
          bool checkDraw();    //implemented 
          void PrintBoard(); //implemented 
          void intializeBoard();
 private:
          char board [3][3] ;
          char player[2];
          int  playerN ;
};
#endif
