#include <stdint.h>
#include <stdbool.h>
#include "emul_ppc.h"

#ifdef __cplusplus
extern "C" {
#endif

void res_init(emul_ppc_state *cpu, uint32_t resourcePtr);
uint32_t res_find(uint32_t name, uint32_t id, uint32_t handle, uint8_t **ptr, uint32_t *size);

#ifdef __cplusplus
}
#endif