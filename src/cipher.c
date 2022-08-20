#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libvig/cipher.h>

void vig_cipher(char **arg)
{
	/*
	 * First argument is plain text
	 * and second is key.
	 * NOTE: arg[0] is name of file
	 * and cipher is based on ascii table,
	 * so can be every character, not only
	 * alphabet.
	 */
	char *pt = arg[1];
	char *key = arg[2];

	if (strlen(pt) > strlen(key)) {
		fprintf(stderr, "vig: string length is not enough!\n");
		exit(0);
	}

	if (strlen(pt) < strlen(key)) {
		printf("vig: warning: length of key is greater than plain text!\n");
	}

	for (int x = 0; x < strlen(pt); x++) {
		pt[x] = (pt[x] + key[x]) % 127;

		if (pt[x] <= 32)
			pt[x] += 33;
	}

	printf("%s\n", pt);
}
