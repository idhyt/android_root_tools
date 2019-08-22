#ifndef __METADATA_H
#define __METADATA_H

#define _RAND_LIST_

#ifdef _RAND_LIST_
/* random list */

/*
unsigned int randnum(int n) //
{
  return 0;
}

char* randstr(int n) // return a pointer to string with length n
{
  return (char *) 0;
}

char* randbuf(int n) // return a pointer to buffer with length n
{
  return (char *) 0;
}


// return 1,2,4 bytes random number
#define randnum(n)          0
// return a pointer to string with length n
#define randstr(n)          (char*) 0
// return a pointer to buffer with length n
#define randbuf(n)          (char*) 0

*/

static char random_string_buffer[0x10000];

static char *get_random_string(int len) {
  int i;

  for(i=0; i<len; ++i)
    random_string_buffer[i] = 'A' + rand() % 26;
  random_string_buffer[len+1] = '\0';
  return (char *) random_string_buffer;
}

// return 1,2,4 bytes random number
#define randnum(n)          rand()
// return a pointer to string with length n
#define randstr(n)          get_random_string(n)
// return a pointer to buffer with length n
#define randbuf(n)          get_random_string(n)

/*
int rand_test() {
  int i;
  for(i = 0; i < 0xff; i++) {
    printf("[%d]: [%d] [%s] \n", i, randnum(), (char *)randstr(i));
    sleep(1);
  }
}
*/


#endif


#endif
