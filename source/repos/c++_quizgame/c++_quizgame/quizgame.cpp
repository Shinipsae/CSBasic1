#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>
#include <conio.h>

void gotoxy(int x, int y) //Ŀ�� ��ġ ���� �Լ�
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void sc_design();

int main() {
	srand((unsigned)time(NULL)); //������������ srand() �Լ�
	system("mode con cols = 120 lines = 30"); //�ܼ� â ũ������
	sc_design(); //���� â ������
	gotoxy(60, 9); //��ǥ����
}

void sc_design() //���� �������� �ֿܼ� ���� �Լ�
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //���� ���

	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	printf("|                                                                             < �̸������������а���б� ���ٻ� ����> |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|---------------------------------------------------------------------------------------------------------------------|\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("|                                                                                                                     |\n");
	printf("-----------------------------------------------------------------------------------------------------------------------");
}