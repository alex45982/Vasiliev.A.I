#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");

	int n;
	char* h[9] = { "���","������","������","���������","�������","��������",
		"�������", "���������", "���������" };
	char* d[8] = { "��������","��������","�����","���������","����������",
		"���������","�����������","���������" };
	char* u[19] = { "����","���","���","������","����","�����","����","������",
		"������","������","�����������","����������","����������","������������",
		"����������","�����������","����������","�������������","������������" };

	printf("enter the numeral: ");
	scanf_s("%i", &n);

	printf("%s ", h[n / 100 - 1]);
	if (n % 100 != 0)
	{
		if (n % 100 < 20)
		{
			printf("%s", u[n % 100 - 1]);
		}
		else
		{
			if (n % 100 / 10 != 0)
			{
				printf("%s ", d[n % 100 / 10 - 2]);
			}
			if (n % 10 != 0)
			{
				printf("%s ", u[n % 10 - 1]);
			}
		}

		return 0;
	}
}