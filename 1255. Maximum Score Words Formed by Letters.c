#include <stdlib.h>
#include <stdio.h>

#define LETTERCOUNT = 26;

#define printArray(format, array, arraySize) ({\
  for (int i = 0; i < arraySize - 1; i++) {\
    printf(format, array[i]);\
  }\
  printf("\n");})

int *countLetters(char *letters, int lettersSize)
{
  int *lettercount = (int *) calloc(26, sizeof(int));
  for (int i = 0; i < 9; i++) {
    lettercount[letters[i] - 97]++;
  }
  return lettercount;
}

int maxScoreWords(char **words, int wordsSize, char *letters, int lettersSize,
                  int *score, int scoreSize) {
  int *lettercount = countLetters(letters, lettersSize);
  return 0;
}

int main() {
  char *words[] = {"dog", "cat", "dad", "good"};
  char letters[] = {'a', 'a', 'c', 'd', 'd', 'd', 'g', 'o', 'o'};
  int score[] = {1, 0, 9, 5, 0, 0, 3, 0, 0, 0, 0, 0, 0,
                 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  // maxScoreWords(words, 4, letters, 9, score, 26);
  int *lettercount = countLetters(letters, 9);
  printArray("%d, ", lettercount, 26);
}
