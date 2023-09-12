#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H_

typedef _Bool                       		boolean;

typedef signed char                 		sint8_t;		//	1 byte 
typedef unsigned char               		uint8_t;

typedef signed short                		sint16_t;		//	2 bytes
typedef unsigned short              		uint16_t;

typedef signed int                  		sint32_t;		// 	4 bytes
typedef unsigned int                		uint32_t;

typedef signed long long int        		sint64_t;		//	8 bytes 
typedef unsigned long long int      		uint64_t;

typedef volatile char                       vchar_t;
typedef volatile signed char                vsint8_t;
typedef volatile unsigned char              vuint8_t;

typedef volatile signed short               vsint16_t;
typedef volatile unsigned short             vuint16_t;

typedef volatile signed int                 vsint32_t;
typedef volatile unsigned int               vuint32_t;
typedef volatile signed long long int       vsint64_t;
typedef volatile unsigned long long int     vuint64_t;

typedef float       						float32;
typedef double      						float64;

#endif 