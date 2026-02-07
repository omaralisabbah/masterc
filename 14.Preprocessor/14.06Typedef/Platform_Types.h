
#ifndef _PLATFORM_TYPES_H
#define _PLATFORM_TYPES_H


#define CPU_TYPE_8   8
#define CPU_TYPE_16  16
#define CPU_TYPE_32  32
#define CPU_TYPE_64  64

/*************************************/
#define CPU_TYPE (CPU_TYPE_64)
/*************************************/
#if (CPU_TYPE == CPU_TYPE_64)
/*
*
*
*
*
*
*
*
*/
#elif (CPU_TYPE == CPU_TYPE_32)
/*
*
*
*
* Datatypes compiler dependent
*
*
*
*/
#elif (CPU_TYPE == CPU_TYPE_16)
/*
*
*
*
*
*
*
*
*/
#elif (CPU_TYPE == CPU_TYPE_8)
/*
*
*
*
*
*
*
*
*/
#endif
/*************************************/
#endif // _PLATFORM_TYPES_H
