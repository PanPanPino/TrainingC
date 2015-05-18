#pragma once


#define LOG_DEBUG 	(4)
#define LOG_VERBOSE	(3)
#define LOG_INFO 	(2)
#define LOG_ERROR	(1)

/*
Use LOG_DEBUG for debugging your program, ie messages will not be printed in release bin
Use LOG_VERBODE for displaying verbose info
Use LOG_INFO for displaying normal messages 
Use LOG_ERROR for displaying only error messages 
*/


/* Define LOG_LEVEL in your c files. Default = DEBUG */
#ifndef LOG_LEVEL
	#define LOG_LEVEL 4
#endif

/* Define LOG_STREAM in your c files. Default = stdout */
#ifndef LOG_STREAM
	#define LOG_STREAM stdout
#endif

#define LOG(level, ...) do { \
	if(level <= LOG_LEVEL) { \
		fprintf(LOG_STREAM, "%s:%d:%s\t", __FILE__, __LINE__, __FUNCTION__); \
		fprintf(LOG_STREAM, __VA_ARGS__) ; \
		fprintf(LOG_STREAM, "\n"); \
		fflush(LOG_STREAM); \
	} \
	}while(0)
