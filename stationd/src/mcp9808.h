#ifndef _MCP9808_H_
#define _MCP9808_H_

#include <stdint.h>
#include "common.h"

/* Register values for MCP9808 */
#define MCP9808_TEMP_REG        0x05

#define TEMP_SIGN_MASK          0x0010
#define TEMP_LVAL_MASK          0xFF00
#define TEMP_UVAL_MASK          0x000F

void MCP9808SetSlave(int i2c_fd);

float MCP9808GetTemp(int i2c_fd);

#endif
