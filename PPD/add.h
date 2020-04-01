/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _ADD_H_RPCGEN
#define _ADD_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct record {
	int x;
	int y;
};
typedef struct record record;

#define ADDPROG 55555555
#define ADDVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define ADD 1
extern  int * add_1(record *, CLIENT *);
extern  int * add_1_svc(record *, struct svc_req *);
extern int addprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ADD 1
extern  int * add_1();
extern  int * add_1_svc();
extern int addprog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_record (XDR *, record*);

#else /* K&R C */
extern bool_t xdr_record ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_ADD_H_RPCGEN */
