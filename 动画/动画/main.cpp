#include<graphics.h>
#include<windows.h>
#include<mmsystem.h>
#include<time.h>
#include<stdio.h>
#include<iostream>
#pragma comment(lib,"winmm.lib")
using namespace std;

int main()
{
	IMAGE images[98];
	char fileName[128];
	cout << "���ڼ���...."<<endl;
	for (int i = 1; i <=98; i++)
	{
		sprintf_s(fileName, "C:\\Users\\asus\\Desktop\\��Ƶ\\�½��ļ���\\���־���_%04d_ͼ�� %02d.jpg",98-i,i);
		loadimage(&images[i - 1], fileName);
	}
	initgraph(896, 504);
	PlaySound("������ - ���־��� (2017������ȫϢ�ݳ���).wav", NULL, SND_FILENAME | SND_ASYNC);
	Sleep(2000);
	while (1)
	{
		//BeginBatchDraw();
		for (int i = 0; i < 98; i++)
		{
			putimage(0, 0, &images[i]);
			Sleep(250);
		}
		//EndBatchDraw();
	}
	system("pause");
	closegraph();
	return 0;
}