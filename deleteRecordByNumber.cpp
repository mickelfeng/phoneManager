/**
	@author:
	@date:2012.6.26
	@cropyright
	@content:the deleteRecord module
*/

#include "main.h"

extern int getRecordCount();
extern struct tele_record saArrayRecord[TELE_RECORD_COUNT];

/**
	@in:
	@return:int(0|1)
	@function:delete by record number
*/
int deleteRecordByNumber(int iNum)
{
	int i;

	//ɾ����Ϣ��Ҫɾ������Ϣ�ĺ�����Ϣȫ��ǰ��
	for(i = iNum;i < getRecordCount();i++)
	{
		saArrayRecord[i] = saArrayRecord[i+1];
	}

	return 1;
}

/**
	@in:
	@return:int(0|1)
	@function:ɾ����¼
*/
int deleteRecord()
{
	int iNum = 0;//���
	int iDeleteResult = 0;

	clearScreen();

	cout<<"����-------------------��ʱ�������¼�¼��-----------------\n"<<endl;
	cout<<"		������Ҫɾ����¼�ļ�¼�ţ�";
	cin>>iNum;
	if(iNum < getRecordCount())
	{
		//ɾ����Ϣ
		iDeleteResult = deleteRecordByNumber(iNum);
		if(iDeleteResult == 1)
		{
			//ɾ���ɹ�
			system("color 2f");//change color
			cout<<"\n		ֵ��ף�أ�ɾ���ɹ�����Ϣ��\n"<<endl;
			showRecord();
		}else
		{
			//ɾ��ʧ��
			cout<<"\n		ɾ��ʧ��,ϵͳ����δ֪����"<<endl;
		system("color cf&ping -n 1 127.1>nul&color fc&ping -n 1 127.1>nul&color cf&ping -n 1 127.1>nul&color fc&ping -n 1 127.1>nul&color cf");//change color
		}
	}else
	{
		//�����ڣ���ʾ����
		cout<<"\n		û�д�����¼��"<<iNum<<"������"<<endl;
		system("color cf&ping -n 1 127.1>nul&color fc&ping -n 1 127.1>nul&color cf&ping -n 1 127.1>nul&color fc&ping -n 1 127.1>nul&color cf");//change color
	}
	cout<<"����--------------------------------------------------\n"<<endl;
	pause();//pause
	system("color 4e");//change color
	clearScreen();//clear screen

	home();
	
	return 1;
}
