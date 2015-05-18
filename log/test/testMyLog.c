#include <stdio.h>
#include <stdlib.h>
#include "myLog.h"

#ifdef LOG_LEVEL
#undef LOG_LEVEL
#define LOG_LEVEL  1
#endif

int main(int argc, char* argv[]) {

	printf("START MAIN\n");

	
	LOG(LOG_DEBUG, "TEST LOG DEBUG\n");
	LOG(LOG_VERBOSE, "TEST LOG VERBOSE\n");
	LOG(LOG_INFO, "TEST LOG INFO\n");
	LOG(LOG_ERROR, "TEST LOG ERROR\n");

	printf("END MAIN\n");
}
