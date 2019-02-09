#ifndef _PRINT_H
#define _PRINT_H

#ifndef PNL
#define PNL()		printf("\n")
#endif

#ifndef PD
#define PD(str)		printf(#str ":%d\n", (str))
#endif
#ifndef PN
#define PN(n)		printf(#n " is %d\n", (n))
#endif
#ifndef PC
#define PC(n)		printf(#n " is %c\n", (n))
#endif
#ifndef PS
#define PS(n)		printf(#n " is %s\n", (n) != NULL ? (n) : "NULL")
#endif
#ifndef PU
#define PU(n)		printf(#n " is %u\n", (n))
#endif
#ifndef PL
#define PL(n)		printf(#n " is %ld\n", (n))
#endif
#ifndef PUL
#define PUL(n)		printf(#n " is %lu\n", (n))
#endif
#ifndef PLL
#define PLL(n)		printf(#n " is %lld\n", (n))
#endif
#ifndef PP
#define PP(n)		printf(#n " is %p\n", (n))
#endif

#ifndef PSS
#define PSS(n)		printf(#n " is |%s|\n", (n))
#endif

#ifndef PN2
#define PN2(n1, n2)		printf(#n1 ":%d, " #n2 ":%d." "\n", (n1), (n2))
#endif

#ifndef P_HERE
#define P_HERE()	printf("execute %s@%d\n", __FUNCTION__, __LINE__);
#endif

#endif
