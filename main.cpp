/**
	@author:
	@date:2012.6.26
	@cropyright:
	@namemethod:Hungary
	@content:����ͥ�ĵ绰���������Թ��ܣ�������Ҫ��ģ��һ����ʵ�ĵ绰�����䣬�������Զ���ȡϵͳ���ں�ʱ�䣬��¼����绰����Ҫ���ݡ������Ķ���������Ϣʱ�����Զ���ȡ��¼����ʾ��������׷�����Լ�¼���������ɾ�����Լ�¼�����յ绰����������Լ�¼���Լ������Լ�¼��������Ĺ��ܡ�
*/

#include "main.h"

extern int initRecordArray();
extern int getRecordCount();

struct tele_record saArrayRecord[TELE_RECORD_COUNT];//declare reacrd array 

/**
	@in:
	@return:int(0|1)
	@function:main function procuder entry
*/
int main(){
	
	setTitle();//set title
	system("color 4e");//change color
	initRecordArray();//��ʼ����¼����

	int i;//accumulator
	int iRecordCount = getRecordCount();//��¼��

	cout<<"����-------------------�绰��������Ϣ-----------------\n\n";
	cout<<"	���	"<<"����		"<<"ʱ��		"<<"�绰����	"<<"��������	\n"<<endl;
	if(iRecordCount == 0)
	{
		cout<<"\n			*** �տ���Ҳ ***\n"<<endl;
	}
	for(i = 0;i < iRecordCount;i++)
	{
		//print record list
		//cout<<"yan\n"<<endl;

		//�����¼��Ϣ
		cout<<"	"<<i;
		cout<<"	"<<saArrayRecord[i].t_date.year<<"."<<saArrayRecord[i].t_date.month<<"."<<saArrayRecord[i].t_date.day;
		cout<<"	"<<saArrayRecord[i].t_time.hour<<":"<<saArrayRecord[i].t_time.min<<"."<<saArrayRecord[i].t_time.second;
		cout<<"		"<<saArrayRecord[i].number;
		cout<<"		"<<saArrayRecord[i].event<<endl<<endl;
	}

	cout<<"����--------------------------------------------------"<<endl;

	home();
	//forever loop 
	

	return 1;
}