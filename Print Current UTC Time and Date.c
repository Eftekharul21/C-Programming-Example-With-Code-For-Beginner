// C program to Display Local and UTC time & date

#include<stdio.h>
#include<time.h>

int main(void)
{
  struct tm *local;
  time_t t;

  t=time(NULL);
  local=localtime(&t);

  printf("Local time & date: %s\n",asctime(local));
  local=gmtime(&t);
  printf("UTC time & date: %s",asctime(local));

  return 0;
}
