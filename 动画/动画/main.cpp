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
	cout << "正在加载...."<<endl;
	for (int i = 1; i <=98; i++)
	{
		sprintf_s(fileName, "C:\\Users\\asus\\Desktop\\视频\\新建文件夹\\极乐净土_%04d_图层 %02d.jpg",98-i,i);
		loadimage(&images[i - 1], fileName);
	}
	initgraph(896, 504);
	PlaySound("洛天依 - 极乐净土 (2017洛天依全息演唱会).wav", NULL, SND_FILENAME | SND_ASYNC);
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