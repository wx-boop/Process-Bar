#include "ProcBar.h"

void process_bar()
{
  char bar[NUM] = {0};
  const char *lable = "|/-\\";
  int i = 0;
  while(i < NUM)
  {
    printf("[%-100s][%d%%][%c]\r",bar,i,lable[i%4]);
    fflush(stdout);
    usleep(100000);
		bar[i++] = '$';
  }
  printf("\n");
}
