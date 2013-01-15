/**
	@author
	@date:2012.6.26
	@cropyright:
	@content:the home module
*/

//inlude header file
#include "main.h"

//extern
extern struct tele_record saArrayRecord[TELE_RECORD_COUNT];

/**
	@in:
	@return:int(0|1)
	@function:home UI
*/
int home()
{
	int iChoice;//user choice num

	cout<<"����----------��ӭʹ�õ绰���������˵�-----------\n";
	cout<<"����	�����������Ϣ����ѡ��1\n";
	cout<<"����	������������Ϣ����ѡ��2\n";
	cout<<"����	ɾ����������Ϣ����ѡ��3\n";
	cout<<"����	���绰�����ѯ������Ϣ����ѡ��4\n";
	cout<<"����	���յ绰����������������Ϣ����ѡ��5\n";
	cout<<"����	�˳�����ѡ��0\n";
	cout<<"����---------------------------------------------\n";
	cout<<"���� ����������ѡ��Ĺ��ܺţ�";
	cin>>iChoice;
	
	switch(iChoice)
	{
		case 1:
			clearScreen();
			showRecord();
			break;
		case 2:
			addRecord();
			break;
		case 3:
			deleteRecord();
			break;
		case 4:
			queryRecord();
			break;
		case 5:
			sortRecord();
			break;
		default:
			clearScreen();//clear screen;
			exit(0);
			break;
	}
	
	return 1;
}

/**
	@in:
	@return:int(0|1)
	@function:init recrod array function
*/
int initRecordArray()
{
	int i;//accumulator

	//��ʼ���ṹ������
		saArrayRecord[0].number = 11111111;
		saArrayRecord[0].t_date.year = 2012;
		saArrayRecord[0].t_date.month = 1;
		saArrayRecord[0].t_date.day = 23;
		saArrayRecord[0].t_time.hour = 0;
		saArrayRecord[0].t_time.min = 0;
		saArrayRecord[0].t_time.second = 0;
		saArrayRecord[0].event = "ǮǮǮǮǮ";
		//cout<<saArrayRecord[i].number;

		//��ʼ���ṹ������
		saArrayRecord[1].number = 2222222;
		saArrayRecord[1].t_date.year = 2012;
		saArrayRecord[1].t_date.month = 1;
		saArrayRecord[1].t_date.day = 1;
		saArrayRecord[1].t_time.hour = 0;
		saArrayRecord[1].t_time.min = 0;
		saArrayRecord[1].t_time.second = 0;
		saArrayRecord[1].event = "ǮǮǮǮǮ";
		//cout<<saArrayRecord[i].number;

	for(i = 2;i < TELE_RECORD_COUNT;i++)
	{
		//struct tele_record *sTemp = new struct tele_record;
		//saArrayRecord[i] = *sTemp;
	
		//��ʼ���ṹ������
		saArrayRecord[i].number = 0;
		saArrayRecord[i].t_date.year = 2012;
		saArrayRecord[i].t_date.month = 1;
		saArrayRecord[i].t_date.day = 1;
		saArrayRecord[i].t_time.hour = 0;
		saArrayRecord[i].t_time.min = 0;
		saArrayRecord[i].t_time.second = 0;
		//cout<<saArrayRecord[i].number;
	}

	return 1;
}