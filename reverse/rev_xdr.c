/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "rev.h"

bool_t
xdr_strg (XDR *xdrs, strg *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->s, 30,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}
