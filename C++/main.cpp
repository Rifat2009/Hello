
#include "TXLib.h"


    void drawDialog()
    {
        txSetColor(RGB(255,255,255));//���������� � ������� ����
        txSetFillColor(RGB(255,255,255));
        txEllipse(380,90,510,160);
        txSetColor(TX_BLACK);
        txSelectFont ("Comic Sans MS", 20);
        txDrawText(380,90,510,160, "�� ��� �����?");

        txSetColor(RGB(255,255,255));// ������ �
        txSetFillColor(RGB(255,255,255));
        txEllipse(510,220,630,275);
        txSetColor(TX_BLACK);
        txSelectFont ("Comic Sans MS", 20);
        txDrawText(510,220,630,275, "����� �����");

        txSetColor(RGB(255,255,255));// ������� ����
        txSetFillColor(RGB(255,255,255));
        txEllipse(530,145,680,210);
        txSetColor(TX_BLACK);
        txSelectFont ("Comic Sans MS", 15);
        txDrawText(530,145,680,210,  "� ������� ���� �� �����");


    }
    void drawinterer()
    {
     //room all
   txSetColor(TX_WHITE);//����������
   txSetFillColor(RGB(0,219,109));
   txRectangle(0,0,800,600);
   //��������� ������� �����
   txSetColor(TX_BLACK);//����������
   txSetFillColor(RGB(234,220,94));
   txRectangle(180,180,555,355);
   txRectangle(180,260,555,355);
   //����� ��� ������
   txSetColor(TX_BLACK);//����������
   txSetFillColor(RGB(159,179,159));
   txRectangle(350,295,390,325);
   //���
   txSetColor(TX_BLACK);//����������
   txSetFillColor(RGB(116,58,58));
   txRectangle(0,350,800,600);
   //����
   txSetColor(TX_BLACK);//����������
   txSetFillColor(RGB(162,142,64));
   txRectangle(0,75,170,350);
   txLine(0,155,170,155);
   txLine(0,255,170,255);
   //����
   txSetColor(TX_BLACK);//����������
   txSetFillColor(RGB(203,198,167));
   txLine(565,220,745,220);
   txLine(565,220,565,350);
   txLine(745,220,745,350);
   //������� ������� �� ������ ���� �� ����
   txSetColor(TX_BLACK);//����������
   txSetFillColor(RGB(186,173,101));
   txCircle(355,160,20);//������
   txLine(350,180,320,260);//����
   txLine(345,180,300,215);//���� �����
   txLine(350,235,350,180);//���� ������
   txLine(320,260,310,225);//���� ������
   txLine(320,260,300,250);//���� �����
   txLine(310,225,300,280);//���� ������ �����������
   txLine(300,250,280,285);//���� ����� �����������
   //�������
   txSetColor(TX_BLACK);//����������
   txSetFillColor(RGB(186,173,101));
   txEllipse(490,215,545,260);
   txLine(495,240,425,250);//����
   txLine(495,240,475,260);//������ ����
   txLine(495,240,460,235);//����� ����
   txLine(425,250,390,270);//������ ����
   txLine(425,250,345,235);//����� ����
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
      POINT star [3] = {{350,3}, {155,120}, {550,120}};//k����
      txPolygon(star,3);
      txSetFillColor(TX_BLUE);//����
      txRectangle(206,164,348,277);
      txSetFillColor(TX_GRAY);//�����
      txRectangle(430,260,540,430);
    }
    void drawDver(int x_dver,int y_dver)
     {
      txSetFillColor(RGB(130,0,0));//�����
      POINT Dver[4] = {{430,260}, { x_dver, y_dver}, { x_dver, y_dver+170} , {430 , 430}};
      txPolygon (Dver, 4);
     }
    void drawMan(int x)
    {
      txSetColor(TX_BLACK);
      txSetFillColor(RGB(186,173,101));
      txLine(x+670-705,435,x+705-705,380);//����1
      txLine(x+730-705,435,x+705-705,380);//����2
      txLine(x+705-705,380,x+705-705,295);//����
      txLine(x+665-705,345,x+705-705,295);//����1
      txLine(x+730-705,340,x+705-705,295);//����2
      txCircle(x+705-705,290,20); //�������
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

      while (x_dver > 480)//����� ������������� �����
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
      while (xMan > 480)//������� ��� � �����
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
      while (x_dver < 540)//����� ������������� �����
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
      while (xCloud < 500)//������ � ������� �����
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
