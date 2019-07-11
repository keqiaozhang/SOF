/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2016 Intel Corporation. All rights reserved.
 *
 * Author: Liam Girdwood <liam.r.girdwood@linux.intel.com>
 *         Keyon Jie <yang.jie@linux.intel.com>
 */

#ifdef __SOF_CLK_H__

#ifndef __PLATFORM_CLK_H__
#define __PLATFORM_CLK_H__

#include <cavs/clk.h>

#define CLK_MAX_CPU_HZ	400000000

#define CPU_DEFAULT_IDX	2

#define SSP_DEFAULT_IDX	0

#define NUM_CPU_FREQ	3

#define NUM_SSP_FREQ	3

#endif /* __PLATFORM_CLK_H__ */

#else

#error "This file shouldn't be included from outside of sof/clk.h"

#endif /* __SOF_CLK_H__ */
