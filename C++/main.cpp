
#include "TXLib.h"


    void drawDialog()
    {
        txSetColor(RGB(255,255,255));//получилось и говорит мама
        txSetFillColor(RGB(255,255,255));
        txEllipse(380,90,510,160);
        txSetColor(TX_BLACK);
        txSelectFont ("Comic Sans MS", 20);
        txDrawText(380,90,510,160, "Ты где гулял?");

        txSetColor(RGB(255,255,255));// говорю я
        txSetFillColor(RGB(255,255,255));
        txEllipse(510,220,630,275);
        txSetColor(TX_BLACK);
        txSelectFont ("Comic Sans MS", 20);
        txDrawText(510,220,630,275, "Около школы");

        txSetColor(RGB(255,255,255));// говорит папа
        txSetFillColor(RGB(255,255,255));
        txEllipse(530,145,680,210);
        txSetColor(TX_BLACK);
        txSelectFont ("Comic Sans MS", 15);
        txDrawText(530,145,680,210,  "Я выходил тебя не видел");


    }
    void drawinterer()
    {
     //room all
   txSetColor(TX_WHITE);//получилось
   txSetFillColor(RGB(0,219,109));
   txRectangle(0,0,800,600);
   //попробуем сделать диван
   txSetColor(TX_BLACK);//получилось
   txSetFillColor(RGB(234,220,94));
   txRectangle(180,180,555,355);
   txRectangle(180,260,555,355);
   //штука для дивана
   txSetColor(TX_BLACK);//получилось
   txSetFillColor(RGB(159,179,159));
   txRectangle(350,295,390,325);
   //пол
   txSetColor(TX_BLACK);//получилось
   txSetFillColor(RGB(116,58,58));
   txRectangle(0,350,800,600);
   //шкаф
   txSetColor(TX_BLACK);//получилось
   txSetFillColor(RGB(162,142,64));
   txRectangle(0,75,170,350);
   txLine(0,155,170,155);
   txLine(0,255,170,255);
   //стол
   txSetColor(TX_BLACK);//получилось
   txSetFillColor(RGB(203,198,167));
   txLine(565,220,745,220);
   txLine(565,220,565,350);
   txLine(745,220,745,350);
   //человек сидящий на диване ногу на ногу
   txSetColor(TX_BLACK);//получилось
   txSetFillColor(RGB(186,173,101));
   txCircle(355,160,20);//голова
   txLine(350,180,320,260);//тело
   txLine(345,180,300,215);//рука левая
   txLine(350,235,350,180);//рука правая
   txLine(320,260,310,225);//нога правая
   txLine(320,260,300,250);//нога левая
   txLine(310,225,300,280);//нога правая продолжение
   txLine(300,250,280,285);//нога левая продолжение
   //подушка
   txSetColor(TX_BLACK);//получилось
   txSetFillColor(RGB(186,173,101));
   txEllipse(490,215,545,260);
   txLine(495,240,425,250);//тело
   txLine(495,240,475,260);//правая рука
   txLine(495,240,460,235);//левая рука
   txLine(425,250,390,270);//правая нога
   txLine(425,250,345,235);//левая нога
}
     void drawCloud(int x)
    {
     txSetColor(RGB(62,197,255));
     txSetFillColor(RGB(62,197,255));
     txEllipse(x+410-410,50,x+580-410,120);
     txEllipse(x+530-410,50,x+660-410,120);
     txEllipse(x+610-410,50,x+780-410,120);
    }
    void drawFon()
    {
      txSetColor(TX_BLACK);
      txSetFillColor(RGB(7,11,78));
      txRectangle(1,1,800,600);
    }
    void drawDom()
    {
      txSetColor(TX_BLACK);//home
      txSetFillColor(RGB(149,230,125));
      txRectangle (155,120,550,435);
      POINT star [3] = {{350,3}, {155,120}, {550,120}};//kрыша
      txPolygon(star,3);
      txSetFillColor(TX_BLUE);//окно
      txRectangle(206,164,348,277);
      txSetFillColor(TX_GRAY);//дверь
      txRectangle(430,260,540,430);
    }
    void drawDver(int x_dver,int y_dver)
     {
      txSetFillColor(RGB(130,0,0));//дверь
      POINT Dver[4] = {{430,260}, { x_dver, y_dver}, { x_dver, y_dver+170} , {430 , 430}};
      txPolygon (Dver, 4);
     }
    void drawMan(int x)
    {
      txSetColor(TX_BLACK);
      txSetFillColor(RGB(186,173,101));
      txLine(x+670-705,435,x+705-705,380);//нога1
      txLine(x+730-705,435,x+705-705,380);//нога2
      txLine(x+705-705,380,x+705-705,295);//тело
      txLine(x+665-705,345,x+705-705,295);//рука1
      txLine(x+730-705,340,x+705-705,295);//рука2
      txCircle(x+705-705,290,20); //человек
    }
    void drawSun (int x)
    {
      txSetColor(TX_YELLOW);
      txSetFillColor(TX_YELLOW);
      txCircle(x,100,50);//sun
    }
    void drawTrava()
    {
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle(3,435,800,600);
    }
    int main()
    {
      txCreateWindow(800,600);

      int xSun = 100;
      int xCloud = 50;
      int xMan = 700;
      int x_dver = 540;
      int y_dver = 260;

      while (x_dver > 480)//вроде открывающаяся дверь
      {
          txBegin();
          drawFon();


          drawTrava();
          drawSun(xSun);
          drawCloud(xCloud);

          drawDom();
          drawDver(x_dver,y_dver);
          drawMan(xMan);

          x_dver -= 2;
          y_dver += 2;
          txSleep(2);
          txEnd();
      }
      while (xMan > 480)//человек иде к двире
      {
          txBegin();
          drawFon();

          drawTrava();
          drawSun(xSun);
          drawCloud(xCloud);

          drawDom();
          drawDver(x_dver,y_dver);
          drawMan(xMan);

          xMan = xMan - 10;
          txSleep(15);
          txEnd();
      }
      while (x_dver < 540)//вроде открывающаяся дверь
      {
          txBegin();
          drawFon();

          drawTrava();
          drawSun(xSun);
          drawCloud(xCloud);

          drawDom();
          drawMan(xMan);

            drawDver(x_dver,y_dver);

          x_dver += 2;
          y_dver -= 2;
          txSleep(2);
          txEnd();
      }
      while (xCloud < 500)//солнце с облокам бегут
      {
          txBegin();
          drawSun(xSun);

          drawFon();
          drawTrava();
          drawCloud(xCloud);

          drawDom();
          drawDver(x_dver,y_dver);
          xSun = xSun+5;
          xCloud = xCloud +10;
          txSleep(15);
          txEnd();
      }

      //while (xMan > 480)
      {
          //txBegin();
          drawinterer();
          drawDialog();
          drawMan(xMan);
      }
      txTextCursor(false);
      return 0;
    }
