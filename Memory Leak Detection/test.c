#include	<malloc.h>
#include	"leak_detector_c.h"
int main()
{
	// "malloc" is mapped to custom method "xmalloc" defined in "leak_detector_c.h"
	char * ptr1 = (char *)malloc(10);
	
	// "calloc" is mapped to custom method "xcalloc" defined in "leak_detector_c.h"
	int * ptr2 = (int *)calloc(10, sizeof(int));
	float * ptr3 = (float *) calloc(15, sizeof(float));
	
	// at this point, only the memory in heap pointed by ptr2 is freed.
	free(ptr2);
	
	// "atexit" metohd registetrs "report_mem_leak" method to be called during exit process by "startup routine".
	atexit(report_mem_leak);
	return 0;
}
