#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>
#include <conio.h>

void gotoxy(int x, int y) //Ŀ�� ��ġ ���� �Լ�
{
	COORD Pos = { x-1, y-1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void sc_design();
void main_screen();

int main() {
	srand((unsigned)time(NULL)); //������������ srand() �Լ�
	system("mode con cols = 120 lines = 30"); //�ܼ� â ũ������
	sc_design(); //���� â ������
	gotoxy(60, 9); //��ǥ����
	main_screen();
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

void main_screen() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("cls");
	sc_design();

	gotoxy(43, 7);
	printf("C++ �ʺ� ���α׷��Ӹ� ���� ���� ����");
	gotoxy(43, 11);
	printf("1. �α���");
	gotoxy(43, 14);
	printf("2. ȸ������");
	gotoxy(43, 17);
	printf("3. ����");
	gotoxy(40, 21);
	printf("���Ͻô� �޴��� �������ּ��� >>");
}