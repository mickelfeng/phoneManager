/**
	@author:
	@date:2012.6.26
	@cropyright
	@content:main header file that some structures/functions/contants needs all files
*/

#ifndef MY_MAIN
#define MY_MAIN
#define TELE_RECORD_COUNT 100//define tele record count

//include common header file
#include <iostream.h>
#include <stdlib.h>


//��չ�ⲿ����
extern int setTitle();
extern int home();
extern int clearScreen();
extern int showRecord();
extern int pause();
extern int addRecord();
extern int deleteRecord();
extern int queryRecord();
extern int sortRecord();
extern struct myTime myTime();

struct teledate				
{
	int month;
	int day;
	int year;
};

struct teletime				
{
	int hour;
	int min;
	int second;
};

struct tele_record				//����������ṹ
{
	teledate t_date; 	 //������������
	teletime t_time;     //��������ʱ��
	int number;          //����绰����
	char *event;     //������������
};

struct myTime
{
	int iYear;
	int iMonth;
	int iDate;
	int iHour;
	int iMin;
	int iSecond;
};

#endif
