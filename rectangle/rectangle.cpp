  #include"rectangle.h"
  #include<iostream>
  #include<cmath>
  #include <iomanip>

  using namespace std; 
  void Rectangle::setNode1(double  x ,double y)
  {
     x1 = x ;
     y1 = y; 
  }
  void Rectangle::setNode2(double x ,double y)
  {
   x2 = x ; 
   y2 = y ; 
  }
  void Rectangle::setNode3(double  x , double y)
  {
   x3 = x ; 
   y3 = y; 
  }
  void Rectangle::setNode4(double x , double y)
  {
    x4 = x ;
    y4 = y ;
  }
  bool Rectangle::findtTheMain(){
  mx1 = x1;
  my1 = y1;
 
  if(mx1 != x2 && my1 != y2)
    {
     mx2 = x2 ; 
     my2 = y2 ;
     if(((mx2 == x3 )|| (mx2 == x4)) && ((my2 == y3) || (my2 == y4)) && ((mx1 == x3) || (mx1 == x4)) && ((my1 == y3) || (my1 == y4)))
     {
         
          if(mx2 == x3)
          {
           width = abs(my2 - y3) ;
           hight = abs(mx2 - x4) ;
          }else if(mx2 == x4)
          {
           width = abs(my2 - y4) ;
           hight = abs(mx2 - x2) ;          
          }
 
          return true;  
     }

    }
    else if(mx1 != x3 && my1 != y3)
    {
     mx2 = x3 ;
     my2 = y3 ;
      if(((mx2 == x2 )|| (mx2 == x4)) && ((my2 == y2) || (my2 == y4)) && ((mx1 == x2) || (mx1 == x4)) && ((my1 == y2) || (my1 == y4)))
      {
         
        if(mx2 == x2)
          {         
           width = abs(my2 - y2) ;
           hight = abs(mx2 - x4) ;
           cout<<mx2<<" "<<x2<<'\n';
          }else if(mx2 == x4)
          {            
           width = abs(my2 - y4) ;
           hight = abs(mx2 - x2) ;          
          }
       return true;
     }  
    }
    else if(mx1 != x4 && my1 != y4)
    {
     mx2 = x4 ;
     my2 = y4 ;
     if(((mx2 == x3 )|| (mx2 == x2)) && ((my2 == y3) || (my2 == y2)) && ((mx1 == x3) || (mx1 == x2)) && ((my1 == y3) || (my1 == y2)))
     {
 
        if(mx2 == x2)
          {
           width = abs(my2 - y2) ;
           hight = abs(mx2 - x3) ;
          }else if(mx2 == x3)
          {
           width = abs(my2 - y2) ;
           hight = abs(mx2 - x3);
                     
          }
        return true;  
     }
  
    }
    return false ; 
 }
   void Rectangle::putThePoint()
   {
 
      
   }
     void Rectangle::print()
     {
 	
       for(int i = 0 ; i < 25 ; i++)
       {
        for(int j = 0 ; j < 25 ; j++)
        {
             //if(board[i][j]!='*')
            ////cout<<'';
           //  else
             cout<<setw(2)<<setfill(' ')<<board[i][j];
         }
         cout<<'\n';
       }
     
     }
     void Rectangle::paint ()
     {
    
      for(int i = 4,startx = i; i < width+startx ; i++)
      {
       for(int j = 10,starty = j ; j < hight+starty ; j ++)
       {
        if( i != startx && i != ((width+startx)-1) && j != starty && j != ((hight+starty)-1))
        {
         board[i][j] = ' ';
        }else
         board[i][j] = '*';
       }
      }
     }
     void Rectangle::FillBoard()
     {
       for(int i = 0 ;i < 25 ;i++)
       {for(int j  = 0; j < 25 ; j++)
        {
          if(i < width )
          {
 
            board[i][((j+hight<=24)?hight+j:j = 24)] = '#' ;   
             
          }else 
           {
           
           board[i][j] = '#';
           }
        } 
       } 
     }
     void Rectangle::rotate(int *w,int *h)
     {
      int temp = *w ;
      *w = *h;
      *h = temp;

     }
