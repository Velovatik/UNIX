#include <stdio.h>
#include <sys/shm.h>
#include <sys/stat.h>

#define KEY ((key_t)(1234))
#define SEGSIZE sizeof(char[100])
char *ap; //Пусть linux сам выделит адрес



int main () {

	int id = shmget(KEY, SEGSIZE, IPC_CREAT | 0666);
	if (id < 0) return 1;
	ap = (char*) shmat(id, 0, 0);

	
	sprintf (ap, "Hello, world! from IPC"); /* Write a string to the shared memory segment. */
	shmdt (ap); /* Detach the shared memory segment. */
}
