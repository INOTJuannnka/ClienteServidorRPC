/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "interface1.h"

bool_t
xdr_nodo_datos_sensores (XDR *xdrs, nodo_datos_sensores *objp)
{
	register int32_t *buf;


	if (xdrs->x_op == XDR_ENCODE) {
		buf = XDR_INLINE (xdrs, 5 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->frecuencia_cardiaca))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->tension_arterial))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->frecuencia_respiratoria))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->saturacion_oxigeno))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->temperatura))
				 return FALSE;
		} else {
			IXDR_PUT_LONG(buf, objp->frecuencia_cardiaca);
			IXDR_PUT_LONG(buf, objp->tension_arterial);
			IXDR_PUT_LONG(buf, objp->frecuencia_respiratoria);
			IXDR_PUT_LONG(buf, objp->saturacion_oxigeno);
			IXDR_PUT_LONG(buf, objp->temperatura);
		}
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		buf = XDR_INLINE (xdrs, 5 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->frecuencia_cardiaca))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->tension_arterial))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->frecuencia_respiratoria))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->saturacion_oxigeno))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->temperatura))
				 return FALSE;
		} else {
			objp->frecuencia_cardiaca = IXDR_GET_LONG(buf);
			objp->tension_arterial = IXDR_GET_LONG(buf);
			objp->frecuencia_respiratoria = IXDR_GET_LONG(buf);
			objp->saturacion_oxigeno = IXDR_GET_LONG(buf);
			objp->temperatura = IXDR_GET_LONG(buf);
		}
	 return TRUE;
	}

	 if (!xdr_int (xdrs, &objp->frecuencia_cardiaca))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->tension_arterial))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->frecuencia_respiratoria))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->saturacion_oxigeno))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->temperatura))
		 return FALSE;
	return TRUE;
}