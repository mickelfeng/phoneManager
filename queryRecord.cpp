/**
	@author:
	@date:2012.6.26
	@cropyright:
	@content:the queryRecord module
*/

#include "main.h"

extern int getRecordCount();
extern struct tele_record saArrayRecord[TELE_RECORD_COUNT];

int queryRecord()
{
	int iNum = 0;//��ѯ�ĵ绰����
	int i;

	clearScreen();

	cout<<"����-------------------̽Ѱ�ɣ��㽫�����ջ�-----------------\n"<<endl;
	cout<<"	������绰���룺";
	cin>>iNum;

	//�ڼ�¼�в�ѯ���
	for(i = 0;i < getRecordCount();i++)
	{
		if(saArrayRecord[i].number == iNum)
		{
			break;//��ѯ���˳�
		}
	}

	if(i == getRecordCount())
	{
		//��Ѷ����ʧ��
		cout<<"\n		û�д�����¼��"<<iNum<<"������"<<endl;
	}else
	{
		system("color 2f");//change color
		//��ѯ�����
		cout<<"	���	"<<"����		"<<"ʱ��		"<<"�绰����	"<<"��������	\n"<<endl;
		cout<<"	"<<i;
		cout<<"	"<<saArrayRecord[i].t_date.year<<"."<<saArrayRecord[i].t_date.month<<"."<<saArrayRecord[i].t_date.day;
		cout<<"	"<<saArrayRecord[i].t_time.hour<<":"<<saArrayRecord[i].t_time.min<<"."<<saArrayRecord[i].t_time.second;
		cout<<"		"<<saArrayRecord[i].number;
		cout<<"		"<<saArrayRecord[i].event<<endl<<endl;
	}

	pause();//pause
	system("color 4e");//change color
	clearScreen();//clear screen

	home();
	
	return 1;
}