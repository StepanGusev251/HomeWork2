#include <stdio.h>
#include <locale.h>


int main() {
	//���������� � ������������� �������� � ���������� ����������
	const int chislo_chelovek = 120;
	const int price_vtor_�lass = 200;

	float x = 0.75 ;

	setlocale(LC_ALL, "RUS");
	//��������� ������� ������� ������
	int price_perv_class = price_vtor_�lass * 2;
	// ���������� ������� ��� ���������� ������� ������
	float Vto_class_tickets = chislo_chelovek * x;
	// ���������� ���������� ������� ������
	float Perv_class_tickets = chislo_chelovek - Vto_class_tickets;

	//������ ��������� ������� ������� � ������� ������
	float price_perv = price_perv_class * Perv_class_tickets;
	float price_vtor = price_vtor_�lass * Vto_class_tickets;

	//����� ����� �� ������� �������
	float total_price = price_perv + price_vtor;

	// ��������������� ����� �����������
	printf("������ ��������� ���� ������� �� ���� \n");
	printf("================================\n\n");
	printf("�������:\n");
	printf("���������� ���� ����������: %d \n", chislo_chelovek);
	printf("��������� ������ ������ ������� ������: %d \n", price_vtor_�lass);
	printf("��������� ������ ������ ������� ������: %d * 2 = %d \n",price_vtor_�lass, price_perv_class);
	
	
	printf("������:\n");
	printf("����������� ���������� ������� ������: %d * 0.75 = %.0f \n", chislo_chelovek, Vto_class_tickets);
	printf("����������� ���������� ������� ������ %d - %.0f = %.0f \n", chislo_chelovek, Vto_class_tickets, Perv_class_tickets);
	printf("��������� ������� ������� ������: %d * %.0f = %.0f \n",price_vtor_�lass, Vto_class_tickets, price_vtor);
	printf("��������� ������� ������� ������: %d * %.0f = %.0f \n", price_perv_class, Perv_class_tickets, price_perv);
	printf("��������� ���� �������: %.0f \n", total_price);

	return 0;
}
