/* Copyright (c) 2015, Linaro Limited
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */


/**
 * @file
 *
 * ODP packet descriptor
 */

#ifndef ODP_PACKET_TYPES_H_
#define ODP_PACKET_TYPES_H_

#ifdef __cplusplus
extern "C" {
#endif
#include <odp/config.h>
#include <odp/std_types.h>
#include <odp/plat/strong_types.h>

/** @addtogroup odp_packet ODP PACKET
 *  Operations on a packet.
 *  @{
 */

typedef ODP_HANDLE_T(odp_packet_t);

#define ODP_PACKET_INVALID _odp_cast_scalar(odp_packet_t, 0xffffffff)

#define ODP_PACKET_OFFSET_INVALID (0x0fffffff)

typedef ODP_HANDLE_T(odp_packet_seg_t);

#define ODP_PACKET_SEG_INVALID _odp_cast_scalar(odp_packet_seg_t, 0xffffffff)

/** Get printable format of odp_packet_t */
static inline uint64_t odp_packet_to_u64(odp_packet_t hdl)
{
	return _odp_pri(hdl);
}

/** Get printable format of odp_packet_seg_t */
static inline uint64_t odp_packet_seg_to_u64(odp_packet_seg_t hdl)
{
	return _odp_pri(hdl);
}

#define ODP_PACKET_OPDATA_MAX_NUM   32


struct odp_packet_single_opdata {
    uint32_t data_len;
    uint8_t  *data;
};


typedef struct odp_packet_opdata {
    uint32_t num_datas;
    struct odp_packet_single_opdata datas[ODP_PACKET_OPDATA_MAX_NUM];
}odp_packet_opdata_t;


/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif
