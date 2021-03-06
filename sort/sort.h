/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SORT_H_RPCGEN
#define _SORT_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct num {
	int arr[20];
	int count;
};
typedef struct num num;

#define SORTS 899
#define BUBBLE 1

#if defined(__STDC__) || defined(__cplusplus)
#define sort 1
extern  num * sort_1(num *, CLIENT *);
extern  num * sort_1_svc(num *, struct svc_req *);
extern int sorts_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define sort 1
extern  num * sort_1();
extern  num * sort_1_svc();
extern int sorts_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_num (XDR *, num*);

#else /* K&R C */
extern bool_t xdr_num ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SORT_H_RPCGEN */
