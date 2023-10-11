#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

char **str_tok(char *in, char *separator, size_t *no_of_words)
{char *token = "NULL";
	int count = 0;
	int length = strlen(in);

	if (!in)
		return 0;

	char **in_array= (char**)malloc(sizeof(char*) * (length + 1));
	strcpy(*in_array, in);

	for(int i = 0; i < length; i++) {
		if((*in_array)[i] == ' ') {
			(*in_array)[i] = '\0'; 
			count++;
		} }

	*no_of_words = count ;
	return in_array; }

	int main() {
		char *in ="hello world";
		char **w;
		size_t x;
		w = str_tok(in," ", &x);
		char *word = *w;
		while (*word) {
			printf("%s", word);
			word += strlen(word) + 1;
		}
		printf("\n%ld",x);
		return 0;}
