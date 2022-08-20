#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libvig/cipher.h>

int main(int argc, char **argv)
{
	if (!strcmp(argv[1], "--help") || !strcmp(argv[1], "-h")) {
		printf("help:\n\t%s [plain text] [key]\n", argv[0]);
		exit(0);
	}

	if (argc <= 2 || argc >= 4) {
		fprintf(stderr, "vig: required 2 arguments!\n");
		exit(0);
	}

	// Do some dummy cipher
	vig_cipher(argv);
}
