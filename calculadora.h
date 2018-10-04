/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALCULADORA_H_RPCGEN
#define _CALCULADORA_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct solucion {
	double respuesta;
	bool_t esCorrecto;
};
typedef struct solucion solucion;

struct operandos {
	double numeros[102];
	int tam;
};
typedef struct operandos operandos;

#define CALCULADORA 0x20000001
#define VERSION_CALCULADORA 1

#if defined(__STDC__) || defined(__cplusplus)
#define suma 1
extern  solucion * suma_1(operandos *, CLIENT *);
extern  solucion * suma_1_svc(operandos *, struct svc_req *);
#define resta 2
extern  solucion * resta_1(operandos *, CLIENT *);
extern  solucion * resta_1_svc(operandos *, struct svc_req *);
#define producto 3
extern  solucion * producto_1(operandos *, CLIENT *);
extern  solucion * producto_1_svc(operandos *, struct svc_req *);
#define division 4
extern  solucion * division_1(operandos *, CLIENT *);
extern  solucion * division_1_svc(operandos *, struct svc_req *);
extern int calculadora_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define suma 1
extern  solucion * suma_1();
extern  solucion * suma_1_svc();
#define resta 2
extern  solucion * resta_1();
extern  solucion * resta_1_svc();
#define producto 3
extern  solucion * producto_1();
extern  solucion * producto_1_svc();
#define division 4
extern  solucion * division_1();
extern  solucion * division_1_svc();
extern int calculadora_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_solucion (XDR *, solucion*);
extern  bool_t xdr_operandos (XDR *, operandos*);

#else /* K&R C */
extern bool_t xdr_solucion ();
extern bool_t xdr_operandos ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALCULADORA_H_RPCGEN */
