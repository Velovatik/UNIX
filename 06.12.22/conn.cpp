#include <stdio.h>
#include <sys/shm.h>
#include <sys/stat.h>

#define KEY ((key_t)(1234))
#define SEGSIZE sizeof(char[100])




int main(){

	char *ap2;
	int id = shmget(KEY, SEGSIZE, 0);
	if (id < 0) return 1;
	ap2 = (char*) shmat(id, 0, 0);
	
	printf ("shared memory attached value %s\n", ap2);

}
