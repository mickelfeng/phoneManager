/**
	@author
	@date:2012.6.26
	@cropyright:
	@content:the sortRecord module
*/

#include "main.h"

extern int getRecordCount();
extern struct tele_record saArrayRecord[TELE_RECORD_COUNT];

int sortRecord()
{
	//ѡ������
	int i;
	int j;
	struct tele_record sTemp;//�����������Žӱ���
	clearScreen();

	cout<<"����-------------------��������Ǻõ�-----------------\n";
	
	//ѡ�������յ绰��������
	for(i = 0; i < getRecordCount(); i++)
	{
		for(j = i + 1; j < getRecordCount();j++)
		{
			if(saArrayRecord[i].number > saArrayRecord[j].number)
			{
				//��������
				sTemp = saArrayRecord[i];
				saArrayRecord[i] = saArrayRecord[j];
				saArrayRecord[j] = sTemp;
			}
		}
	}
	system("color 2f");//change color
	showRecord();

	pause();//pause
	system("color 4e");//change color
	clearScreen();//clear screen

	home();

	return 1;
}