#include <stdio.h>
#include <stdlib.h>

#include "emul_ppc.h"
#include "debug.h"

// FIXME: how to properly handle varargs?
int ppc_printf(emul_ppc_state *cpu)
{
    FIXME("using first 10 integer arguments");

    const char *fmt = (char *)cpu->ram + cpu->r[3];

    printf(fmt,
           PPC_ARG_INT(cpu, 2),
           PPC_ARG_PTR(cpu, 3),
           PPC_ARG_INT(cpu, 4),
           PPC_ARG_INT(cpu, 5),
           PPC_ARG_INT(cpu, 6),
           PPC_ARG_INT(cpu, 7),
           PPC_ARG_INT(cpu, 8),
           PPC_ARG_INT(cpu, 9),
           PPC_ARG_INT(cpu, 10),
           PPC_ARG_INT(cpu, 11)
    );

    printf("\n");

    PPC_RETURN_INT(cpu, 1);
}

int ppc_memset(emul_ppc_state *cpu)
{
    uint8_t *s = (uint8_t *)PPC_ARG_PTR(cpu, 1);
    int32_t c = PPC_ARG_INT(cpu, 2);
    uint32_t n = PPC_ARG_INT(cpu, 3);

    for (uint32_t i = 0; i < n; i++)
        s[i] = (int8_t)c;

    PPC_RETURN_INT(cpu, PPC_ARG_INT(cpu, 1));
}

int ppc___setjmp(emul_ppc_state *cpu)
{
    FIXME("() stub");
    PPC_RETURN_INT(cpu, 0);
}

int ppc_exit(emul_ppc_state *cpu)
{
    INFO("()");
    return 1;
}
