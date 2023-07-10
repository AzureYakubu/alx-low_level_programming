#include "main.h"
#include <stdlib.h>
#include <string.h>
int count_words(char *str);
int is_delimiter(char c);
char **strtow(char *str) {
if (str == NULL || *str == '\0') {
return NULL;
}
int num_words = count_words(str);
if (num_words == 0) {
return NULL;
}
char **words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL) {
return NULL;
}
int i, j, k = 0;
for (i = 0; str[i] != '\0'; i++) {
if (!is_delimiter(str[i])) {
int word_len = 0;
for (j = i; str[j] != '\0' && !is_delimiter(str[j]); j++) {
word_len++
}
words[k] = (char *)malloc((word_len + 1) * sizeof(char));
if (words[k] == NULL) {
for (i = 0; i < k; i++) {
free(words[i]);
}
free(words);
return NULL;
}
strncpy(words[k], &str[i], word_len);
words[k][word_len] = '\0';
k++;
i = j - 1;
}
}
words[k] = NULL;
return words;
}
int count_words(char *str) {
int count = 0;
int in_word = 0;
for (int i = 0; str[i] != '\0'; i++) {
if (!is_delimiter(str[i])) {
if (!in_word) {
in_word = 1;
count++;
}
} else {
in_word = 0;
}
}
return count;
}
int is_delimiter(char c) {
return c == ' ' || c == '\t' || c == '\n';
}
