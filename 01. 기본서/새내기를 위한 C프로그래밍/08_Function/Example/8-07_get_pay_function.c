#include <stdio.h>

// �Լ��� ���� ����
int get_pay(int hours, int day_rate, int hour_rate);

// main �Լ��� ����
int main() {
	int total_hours;	// �ٷ� �ð�
	int daily_rate = 100000, hourly_rate = 10000;	// �ϱ�, �ñ�
	int pay;			// �ӱ�

	printf("�ٷ� �ð���? ");
	scanf("%d", &total_hours);

	pay = get_pay(total_hours, daily_rate, hourly_rate);
	printf("�� �Ϸ� �ӱ��� %d��\n", pay);

	return 0;
}

// �ٷ� �ð��� ���� �޿��� ���ϴ� get_pay �Լ��� ����
int get_pay(int hours, int day_rate, int hour_rate) {
	int day = hours / 8;
	hours = hours % 8;

	return (day*day_rate + hours * hour_rate);
}