#include <stdio.h>
// gcc struct.c -o struct

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
	int abc = 5;
	printf("Abc degeri: %d\n",abc);
	printf("Abc konumu :%p\n",&abc);

	printf("Oyuncu boyutu: %ld\n", sizeof(struct Oyuncu));
	struct Oyuncu oyuncu1;
	oyuncu1.can = 100;
	printf("1 Can Degeri once: %d\n",oyuncu1.can);
	hasar_ver(&oyuncu1, 20);
	printf("1 Can Degeri sonra: %d\n",oyuncu1.can);
}

