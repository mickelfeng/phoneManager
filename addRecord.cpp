/**
	@author
	@date:2012.6.26
	@cropyright:
	@content:the addRecord module
*/

#include "main.h"

extern int getRecordCount();
extern struct tele_record saArrayRecord[TELE_RECORD_COUNT];

/**
	@in:
	@return:int(0|1)
	@function:add record
*/
int addRecord()
{
	int iCount = 0;//��Ӽ�¼������Ĭ��Ϊ��
	int i;
	int iNum;//�绰����
	char *caContent = NULL;//��������
	int iRecordCount = getRecordCount();//��ǰ�绰����¼������
	

	struct myTime currentTime = myTime();
	clearScreen();

	cout<<"����-------------------��ӵ绰��Ϣ-----------------\n";
	cout<<"		��������Ӽ�¼��������";
	cin>>iCount;
	
	for(i = 0;i < iCount;i++)
	{
		caContent = new char[100];//����ռ�

		cout<<"	��ӵ�"<<i<<"����\n";
		cout<<"		�绰��";
		cin>>iNum;
		cout<<"		���ݣ�";
		cin>>caContent;

		//��ӵ���ǰ��¼
		saArrayRecord[i + iRecordCount].number = iNum;
		saArrayRecord[i + iRecordCount].event = caContent; 
		saArrayRecord[i + iRecordCount].t_date.year = currentTime.iYear;
		saArrayRecord[i + iRecordCount].t_date.month = currentTime.iMonth;
		saArrayRecord[i + iRecordCount].t_date.day = currentTime.iDate;
		saArrayRecord[i + iRecordCount].t_time.hour = currentTime.iHour;
		saArrayRecord[i + iRecordCount].t_time.min = currentTime.iMin;
		saArrayRecord[i + iRecordCount].t_time.second = currentTime.iSecond;
	}
	
	cout<<"����--------------------------------------------------\n"<<endl;

	system("color 2f");//change color
	cout<<"	��ӳɹ���������"<<endl<<endl;
	showRecord();
	pause();//pause
	system("color 4e");//change color
	clearScreen();//clear screen

	home();

	return 1;
}
