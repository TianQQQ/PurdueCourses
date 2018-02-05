#include "usertraps.h"
#include "misc.h"

#define HELLO_WORLD "hello_world.dlx.obj"

void main (int argc, char *argv[])
{
	int *a,*b,*c,*d, *e;

	if (argc != 1) {
		Printf("Usage: \n");
		Exit();
	}
	/*malloc(32);
	malloc(33);
	malloc(64);
	malloc(65);*/
	Printf("malloc size of 12\n");
	a = malloc(12);
	Printf("\n");
	Printf("malloc size of 33\n");
	b = malloc(33);
	Printf("\n");
	Printf("malloc size of 13\n");
	c = malloc(13);
	Printf("\n");
	Printf("malloc size of 64\n");
	d = malloc(64);
	Printf("\n");
	Printf("malloc size of 3500\n");
	e = malloc(3500);
	Printf("3500 ptr: %d\n", (int)e);

	Printf("\n");
	Printf("mfree size of 33\n");
	mfree(b);
	Printf("\n");
	Printf("mfree size of 64\n");
	mfree(d);
	Printf("\n");
	Printf("mfree size of 12\n");
	mfree(a);
	Printf("\n");
	Printf("mfree size of 13\n");
	mfree(c);
	Printf("makeprocs (%d): malloc mfree test completed, exiting main process.\n", getpid());

}