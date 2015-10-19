/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PS_H_RPCGEN
#define _PS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct processes {
	char proc[400];
	int pid[40];
	int total;
};
typedef struct processes processes;

#define REMOTEPROCS 777
#define PROCS 1

#if defined(__STDC__) || defined(__cplusplus)
#define remotep 1
extern  processes * remotep_1(double *, CLIENT *);
extern  processes * remotep_1_svc(double *, struct svc_req *);
extern int remoteprocs_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define remotep 1
extern  processes * remotep_1();
extern  processes * remotep_1_svc();
extern int remoteprocs_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_processes (XDR *, processes*);

#else /* K&R C */
extern bool_t xdr_processes ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PS_H_RPCGEN */