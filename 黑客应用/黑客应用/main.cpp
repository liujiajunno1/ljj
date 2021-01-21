#include<iostream>
#include<windows.h>
#include<string>
#include<graphics.h>

#define wideth 600
#define heighth 480

using namespace std;

void attack404() {
	system("cls");
	system("mode con cols=100 lines=100");
	cout << "¾´ÇëÆÚ´ý!";
}
void attackbl() {
	system("cls");
	system("mode con cols=100 lines=100");
	cout << "¾´ÇëÆÚ´ý!";
}
void menu()

{
	initgraph(wideth, heighth,SHOWCONSOLE);
	loadimage(0, "u=701498866,1538805829&fm=26&gp=0.jpg",wideth,heighth);
	settextcolor(RGB(255, 255, 0));
	settextstyle(20,0,"Î¢ÈíÑÅºÚ");
	rectangle(400, 20, 550, 50);
	outtextxy(410, 25, "No.1 ±©Á¦ÆÆ½âÃÜÂë");

	rectangle(400, 60, 550, 90);
	outtextxy(410, 65, "No.2 ±©Á¦ÆÆ½âÃÜÂë");

	rectangle(400, 100, 550, 130);
	outtextxy(410, 105, "No.3 ±©Á¦ÆÆ½âÃÜÂë");

	rectangle(400, 140, 550, 170);
	outtextxy(410, 145, "No.4 ±©Á¦ÆÆ½âÃÜÂë");

	rectangle(400, 180, 550, 210);
	outtextxy(410, 185, "No.5 ÍË³ö");

	MOUSEMSG m;
	while (1)
	{
		m = GetMouseMsg();

		if (m.x >= 400 && m.x <= 550 && m.y>=60 && m.y <= 90)
		{
			setlinecolor(RED);
			rectangle(398, 58, 552, 92);
			if (m.uMsg == WM_LBUTTONDOWN)
			{
				attack404();
			}
		}
		else
		{
			setlinecolor(BLACK);
			rectangle(398, 58, 552, 92);
		}

		if (m.x >= 400 && m.x <= 550 && m.y >= 20 && m.y <= 50)
		{
			setlinecolor(RED);
			rectangle(398, 18, 552, 52);
			if (m.uMsg == WM_LBUTTONDOWN)
			{
				attackbl();
				
			}
		}
		else
		{
			setlinecolor(BLACK);
			rectangle(398, 18, 552, 52);
		}

		if (m.x >= 400 && m.x <= 550 && m.y >= 100 && m.y <= 130)
		{
			setlinecolor(RED);
			rectangle(398, 98, 552, 132);
		}
		else
		{
			setlinecolor(BLACK);
			rectangle(398, 98, 552, 132);
		}

		if (m.x >= 400 && m.x <= 550 && m.y >= 140 && m.y <= 170)
		{
			setlinecolor(RED);
			rectangle(398, 138, 552, 172);
		}
		else
		{
			setlinecolor(BLACK);
			rectangle(398, 138, 552, 172);
		}

		if (m.x >= 400 && m.x <= 550 && m.y >= 180 && m.y <= 210)
		{
			setlinecolor(RED);
			rectangle(398, 178, 552, 212);
			if (m.uMsg == WM_LBUTTONDOWN)
			{
				exit(666);
			}
		}
		else
		{
			setlinecolor(BLACK);
			rectangle(398, 178, 552, 212);
		}
	}


	getchar();//·ÀÖ¹ÉÁÆÁ
	closegraph();
}
void login()
{
	string name;
	string pwd;
	while (1)
	{
		system("cls");

		cout << "ÇëÊäÈëÄúµÄÕËºÅ:";
		cin >> name;

		cout << "ÇëÊäÈëÄúµÄÃÜÂë:";
		cin >> pwd;

		if (name == "Áõ¼Î¿¡" && pwd == "ljj20011003")
		{
			break;
		}
		else if(name=="ljj"&&pwd=="20011003")
		{
			break;
		}
		else
		{
			cout << "ÕËºÅ»òÃÜÂë´íÎó!" << endl;
			system("pause");
		}
	}



}

int main()
{
	system("mode con cols=40 lines=5");
	login();
	menu();
	return 0;
}