# Домашняя работа 2
Условие задачи
Реактивный аэробус летит с пассажирами на борту из Лондона в Нью-Йорк. Три
четверти пассажиров имеют билеты второго класса стоимостью х фунтов каждый.
Остальные пассажиры имеют билеты первого класса, кото-рые стоят вдвое дороже
билетов второго класса. Напишите программу, которая выведет сумму денег,
получаемую авиакомпанией от продажи билетов на этот рейс.

1. Алгоритм и блок-схема.
Алгоритм
Начало
Объявить константы:
chislo_chelovek = 120 — Число человек на борту.
price_vtor_сlass = 200 - Соимость билета второго класса.
Задать исходные данные:
x = 0.75 - три четверти пассажиров имеют билеты второго класса.
Стоимость билетов второго класса
price_perv_class = price_vtor_сlass * 2
Количесвто билетов для пассажиров второго класса
Vto_class_tickets = chislo_chelovek * x
Количесвто пассажиров первого класса
Perv_class_tickets = chislo_chelovek - Vto_class_tickets
Расчёт стоимости билетов превого и второго класса
price_perv = price_perv_class * Perv_class_tickets
float price_vtor = price_vtor_сlass * Vto_class_tickets
Сумма денег от продажи билетов
total_price = price_perv + price_vtor;
Вывести результаты расчетов с подстановкой всех результатов в текст.
Конец.
<img width="161" height="701" alt="Диаграмма без названия drawio" src="https://github.com/user-attachments/assets/69550cd7-81c1-4d67-a165-0662454eb172" />
3. Реализация программы
   #include <stdio.h>
#include <locale.h>


int main() {
	//Объявление и инициализация констант и конкретных переменных
	const int chislo_chelovek = 120;
	const int price_vtor_сlass = 200;

	float x = 0.75 ;

	setlocale(LC_ALL, "RUS");
	//Стоимость билетов второго класса
	int price_perv_class = price_vtor_сlass * 2;
	// Количесвто билетов для пассажиров второго класса
	float Vto_class_tickets = chislo_chelovek * x;
	// Количесвто пассажиров первого класса
	float Perv_class_tickets = chislo_chelovek - Vto_class_tickets;

	//Расчёт стоимости билетов превого и второго класса
	float price_perv = price_perv_class * Perv_class_tickets;
	float price_vtor = price_vtor_сlass * Vto_class_tickets;

	//Сумма денег от продажи билетов
	float total_price = price_perv + price_vtor;

	// Форматированный вывод результатов
	printf("РАСЧЕТ СТОИМОСТИ ВСЕХ БИЛЕТОВ НА РЕЙС \n");
	printf("================================\n\n");
	printf("УСЛОВИЯ:\n");
	printf("Количество всех пассажиров: %d \n", chislo_chelovek);
	printf("Стоимсоть одного билета второго класса: %d \n", price_vtor_сlass);
	printf("Стоимсоть одного билета первого класса: %d * 2 = %d \n",price_vtor_сlass, price_perv_class);
	
	
	printf("РАСЧЕТ:\n");
	printf("Колличество пассажиров второго класса: %d * 0.75 = %.0f \n", chislo_chelovek, Vto_class_tickets);
	printf("Колличество пассажиров первого класса %d - %.0f = %.0f \n", chislo_chelovek, Vto_class_tickets, Perv_class_tickets);
	printf("Стоимость билетов второго класса: %d * %.0f = %.0f \n",price_vtor_сlass, Vto_class_tickets, price_vtor);
	printf("Стоимость билетов первого класса: %d * %.0f = %.0f \n", price_perv_class, Perv_class_tickets, price_perv);
	printf("Стоимость всех билетов: %.0f \n", total_price);

	return 0;
}
3. Результаты работы программы
<img width="438" height="230" alt="image" src="https://github.com/user-attachments/assets/9d6217a4-a206-49f0-b160-e980bc21ad4d" />
4. Информация о разработчике
Гусев Степан бИЦ-251
