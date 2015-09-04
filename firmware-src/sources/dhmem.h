/**
 *	\file		dhmem.h
 *	\brief		Memory manager helper.
 *	\author		Nikolay Khabarov
 *	\date		2015
 *	\copyright	DeviceHive MIT
 *	\details	Observer current memory status, and blocks firmware from generating new objects until memory will be free.
 */

#ifndef _DHMEM_H_
#define _DHMEM_H_

#include "dhrequest.h"

/**
 *	\brief		Activate memory save mode
 */
void dhmem_block();

/**
 *	\brief		Deactivate memory save mode
 */
void dhmem_unblock();

/**
 *	\brief		Check memory status good and new request allocation is possible.
 *	\return		Non zero if memory status is bad and allocation of new requests should be blocked. Zero otherwise.
 */
int dhmem_isblock();

/**
 *	\brief		Callback that will be called when allocation is possible again.
 */
extern void dhmem_unblock_cb();

#endif /* _DHMEM_H_ */
