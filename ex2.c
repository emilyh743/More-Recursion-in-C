#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void bedtimestory(char words[20][15], int current, int number) {
  if (current == 0){                    // Print something before
   printf("A %s couldn't sleep, so her mother told a story about a little %s,\n", words[current], words[current+1]);
   current++;                // Recursive call to bedtimestory()
  } else if (current < number - 2) {                   // Print something after
   for (int i = 0; i < current; i++) {
	printf("  ");
   }
   printf("who couldn't sleep, so the %s's mother told a story about a little %s,\n", words[current], words[current+1]);
   current++;

  } else if (current = number - 2) {
   while (current >= 0) {
	for (int i = 0; i < current; i++) {
	   printf("  ");
        }
	if (current == number-2) {
          printf("... who fell asleep.\n");
        } else if (current == 0) {
          printf("... and then the %s fell asleep.\n", words[0]);
        } else {
          printf("... and then the little %s fell asleep;\n", words[current]);
        }
        current--;
        }
   current++;
   }
   if (current > 0 && current < number - 1 ) {
     bedtimestory(words, current, number);
  }
}


int main() {
  char names[20][15];   // Up to 20 names, each up to 15 letters long (incl. NULL)
  int i = 0, num = 0;
  char end1[15];
  int diff = -1;

      while(diff != 0) {
        fgets(names[i], 15, stdin);
        diff = strcmp(names[i], "END\n"); 
        num++;
        i++;
      }


  for (int i = 0; i < 20; i++){
	fgets(names[i], 15, stdin);   	// Read the names from the input
	names[i][strlen(names[i]) - 1] = '\0';       //get rid of \n
    if (strcmp(names[i], "END") == 0) {  //compare return val with "END" and terminate
	break;
    }
  }
  bedtimestory(names, 0, num);
}

