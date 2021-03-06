/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _BANK_H_RPCGEN
#define _BANK_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct usr_pass {
	char usr[100];
	char pass[100];
};
typedef struct usr_pass usr_pass;

#define BANK 666
#define SWISS_BANK 1

#if defined(__STDC__) || defined(__cplusplus)
#define INIT 1
extern  double * init_1(usr_pass *, CLIENT *);
extern  double * init_1_svc(usr_pass *, struct svc_req *);
#define VERIFY 2
extern  double * verify_1(usr_pass *, CLIENT *);
extern  double * verify_1_svc(usr_pass *, struct svc_req *);
#define BALANCE 3
extern  double * balance_1(double *, CLIENT *);
extern  double * balance_1_svc(double *, struct svc_req *);
extern int bank_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define INIT 1
extern  double * init_1();
extern  double * init_1_svc();
#define VERIFY 2
extern  double * verify_1();
extern  double * verify_1_svc();
#define BALANCE 3
extern  double * balance_1();
extern  double * balance_1_svc();
extern int bank_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_usr_pass (XDR *, usr_pass*);

#else /* K&R C */
extern bool_t xdr_usr_pass ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_BANK_H_RPCGEN */
