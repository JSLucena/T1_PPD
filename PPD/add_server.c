/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "add.h"

int *
add_1_svc(record *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	fprintf(stderr,"requisicao chegou");
	result = argp->x + argp->y;
	return &result;
}
