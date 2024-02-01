#include <stdio.h>
// gcc struct.c -o struct

struct Oyuncu {
	int x;
	int y;
	char can;
};

char hasar_ver(char health, char miktar) {
	health = health - miktar;
	return health;
}
int main() {
	int x,y;
	char health_oyuncu_1;
	char health_oyuncu_2;
	health_oyuncu_1 = 100;
	health_oyuncu_2 = 100;

	printf("1 Can Degeri once: %d\n",health_oyuncu_1);
	health_oyuncu_1 = hasar_ver(health_oyuncu_1, 20);
	printf("1 Can Degeri sonra: %d\n",health_oyuncu_1);

	printf("2 Can Degeri once: %d\n",health_oyuncu_2);
	health_oyuncu_2 = hasar_ver(health_oyuncu_2, 30);
	printf("2 Can Degeri sonra: %d\n",health_oyuncu_2);

}

