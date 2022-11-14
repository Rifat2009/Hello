
#include "TXLib.h"

    void drawPlayground()
    {
    //���������
    txSetColor(TX_RED,5);//����������
    txSetFillColor(RGB(255,242,0));
    txRectangle(30,450,260,600);
    //�������
    txSetColor(TX_BLACK);//����������
    txSetFillColor(RGB(0,0,0));
    txRectangle(75,485,110,525);

    txSetColor(TX_BLACK);//����������
    txSetFillColor(RGB(255,255,255));
    txRectangle(75,485,95,505);

    txSetColor(TX_BLACK);//����������
    txSetFillColor(RGB(251,0,6));
    txRectangle(110,505,165,525);

    txSetColor(TX_BLACK);//����������
    txSetFillColor(RGB(0,0,0));
    txCircle(100,535,10);
    txCircle(150,535,10);
    //������
    txLine(225,565,225,475);
    txLine(205,480,205,510);
    txLine(245,480,245,510);
    txLine(245,510,205,510);
    //������
      txSetColor(TX_BLACK);//����� �����
      txSetFillColor(RGB(236,0,6));
      POINT leftkralo [3] = {{310,475}, {275,520}, {310,520}};
      txPolygon(leftkralo,3);

      txSetColor(TX_BLACK);//������ �����
      txSetFillColor(RGB(236,0,6));
      POINT rightkralo [3] = {{365,475}, {400,520}, {365,520}};
      txPolygon(rightkralo,3);

      txSetColor(TX_BLACK);//������� �����
      txSetFillColor(RGB(19,44,217));
      POINT toppiece [3] = {{310,460}, {340,425}, {365,460}};
      txPolygon(toppiece,3);

      txSetColor(TX_BLACK);//������� �����
      txSetFillColor(RGB(7,228,24));
      txRectangle(310,460,365,550);
      txLine(365,550,380,575);
      txLine(380,575,290,575);
      txLine(290,575,310,550);
      txSetColor(TX_BLACK);//������� �����
      txSetFillColor(RGB(37,218,200));
      txCircle(340,500,20);


    }
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
        txDrawText(530,145,680,210,  "��� ������ ������?");
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
   //�����
   txSetColor(TX_BLACK);//����������
   txSetFillColor(RGB(7,55,248));
   txRectangle(0,115,15,155);
   txRectangle(30,120,65,155);
   txRectangle(0,200,25,255);
   txRectangle(45,230,100,255);
   //��������
   txSetColor(TX_BLACK);//����������
   txSetFillColor(RGB(207,16,16));
   txCircle(110,105,17);
   txCircle(110,135,17);
   //��������
     txSetColor(TX_BLACK);//����������
     txSetFillColor(RGB(207,16,16));
     txArc (700, 260, 730, 290, 0, 180);//�����
     txRectangle(680,275,755,350);
     txRectangle(680,290,705,345);//����� �����
     txRectangle(730,290,755,350);//����� ������

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
      txSetFillColor(RGB(236,9,20));
      txRectangle (155,120,550,435);
      txSetColor(TX_BLACK);//k����
      txSetFillColor(RGB(117,106,105));
      POINT star [3] = {{350,3}, {155,120}, {550,120}};
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
          drawPlayground();
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
          drawPlayground();
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
          drawPlayground();
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
          drawPlayground();
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
