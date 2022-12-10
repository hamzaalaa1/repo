#ifndef  RECTANGLE_H 
#define  RECTANGLE_H 
class Rectangle
{
 public : 
 
   void setNode1(double  x ,double y);
   void setNode2(double x ,double y);
   void setNode4(double x , double y);
   void setNode3(double  x , double y);
     
  double getX1();
  double getX2();
  double getX3();
  double getX4();
  double getY1();
  double getY2();
  double getY3();
  double getY4();
  bool findtTheMain(); 
  int hight ; 
  int width ;
  void putThePoint();
  void print( );
  void paint ();
  void FillBoard();
  void rotate(int *w,int *h);
  private:
  double x1 ,y1;
  double x2 ,y2;
  double x3 ,y3;
  double x4 ,y4;
  double mx1,my1;
  double mx2,my2;
  int startx , starty ;
  int X , Y ;
  char board[25][25];
};
#endif
