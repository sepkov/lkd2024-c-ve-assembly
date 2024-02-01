#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Oyuncu {
	char isim[32];
	int x;
	int y;
	char can;
	long para;
};

void hasar_ver(struct Oyuncu *hasar_alan_oyuncu, char miktar) {
	hasar_alan_oyuncu->can -= miktar;
}

int main() {

	struct Oyuncu *oyuncular = malloc(10 * sizeof(struct Oyuncu));
	for(int i = 0; i < 10; i++) {
		char format[] = "Oyuncu-%d";
		snprintf((oyuncular + i)->isim, sizeof(format), format,i);
		(oyuncular + i)->x = 0;
		(oyuncular + i)->y = 0;
		(oyuncular + i)->para = 500;
	}

	for(int i = 0; i< 10; i++) {
		printf("Oyuncu %d adi: %s\n",i + 1,(oyuncular + i)->isim);
	}

	char isim[10];
	int int_array[10];
	scanf("%s",isim);
	printf("Okunan isim: %s\n",isim);

	int *buyuk_alan = malloc(sizeof(int) * 1000);
	struct Oyuncu *oyuncu2 = (struct Oyuncu*)buyuk_alan;
	oyuncu2->can = 100;
	printf("2 Can Degeri once: %d\n",oyuncu2->can);
	hasar_ver(oyuncu2,30);
	printf("2 Can Degeri once: %d\n",oyuncu2->can);
	printf("Buyuk alan adresi: %p\n",buyuk_alan);

	printf("Oyuncu boyutu: %ld\n", sizeof(struct Oyuncu));
	struct Oyuncu oyuncu1;
	oyuncu1.can = 100;
	hasar_ver(&oyuncu1, 20);
	printf("1 Can Degeri sonra: %d\n",oyuncu1.can);
}

