#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int d, m;
	char* a[31] = { "������","������","������","��������","�����",
		"������","�������","�������","�������","�������",
		"������������","�����������","�����������","�������������",
		"�����������","������������","�����������","�������������",
		"�������������","���������","�������� ������","�������� ������",
		"�������� ������","�������� ���������","�������� �����",
		"�������� ������","�������� �������","�������� �������",
		"�������� �������","���������", "�������� ������" };
	char* b[12] = { "������","�������","�����","������","���","����",
		"����","�������","��������","�������","������","�������" };

	printf("enter the day and the month: ");
	scanf_s("%i %i", &d, &m);

	printf("%s %s", a[d-1], b[m-1]);

	return 0;
}