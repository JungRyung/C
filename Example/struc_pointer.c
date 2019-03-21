#include <stdio.h>

typedef struct DenoiseState DenoiseState;

struct DenoiseState
{
	float analysis_mem[10];
	float cepstral_mem[10];
	int key;
};

DenoiseState *rnnoise_create() {
  DenoiseState *st;
  st = malloc(rnnoise_get_size());
  rnnoise_init(st);
  return st;
}

int rnnoise_get_size() {
  return sizeof(DenoiseState);
}

int rnnoise_init(DenoiseState *st) {
  memset(st, 0, sizeof(*st));
  return 0;
}

int main()
{
	int strucAddr;
	DenoiseState *st;
	DenoiseState *st2;

	st = rnnoise_create();
	st->key = 102;
	printf("address of st : %x\n",st);

	strucAddr = st;
	st2 = strucAddr;
	printf("address of st2 : %x\n", st2);
	printf("st2.key : %d\n",st2->key);

	return 0;
}