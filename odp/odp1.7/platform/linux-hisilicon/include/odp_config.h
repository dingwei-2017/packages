/*
 * Copyright(c) 2010-2015 Intel Corporation.
 * Copyright(c) 2014-2015 Hisilicon Limited.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the BSD-3-Clause License as published by
 * the Free Software Foundation.
 *
 */

#ifndef __ODP_CONFIG_H
#define __ODP_CONFIG_H
#define ODP_LIBODP_XEN_DOM0 1

#undef ODP_EXEC_ENV
#define ODP_EXEC_ENV "linuxapp"

/* #undef ODP_EXEC_ENV_LINUXAPP
 #define ODP_EXEC_ENV_LINUXAPP 1 */
#undef ODP_FORCE_INTRINSICS
#undef ODP_BUILD_SHARED_LIB
#undef ODP_BUILD_COMBINE_LIBS
#undef ODP_LIBNAME
#define ODP_LIBNAME "huawei_odp"
#undef ODP_LIBODP
#define ODP_LIBODP 1
#undef ODP_MAX_MMFRAG
#define ODP_MAX_MMFRAG 128
#undef ODP_MAX_MM_DISTRICT
#define ODP_MAX_MM_DISTRICT 128
#undef ODP_MAX_TAILQ
#define ODP_MAX_TAILQ 32
#undef ODP_LOG_LEVEL
#define ODP_LOG_LEVEL 8
#undef ODP_LIBODP_USE_HPET
#undef ODP_ALLOW_INV_SOCKET_ID
#undef ODP_VFIO
#define ODP_VFIO 1
#undef ODP_PCI_CONFIG
#undef ODP_PCI_EXTENDED_TAG
#define ODP_PCI_EXTENDED_TAG ""
#undef ODP_PCI_MAX_READ_REQUEST_SIZE
#define ODP_PCI_MAX_READ_REQUEST_SIZE 0
#undef ODP_LIBODP_HOTPLUG
#define ODP_LIBODP_HOTPLUG 1
#undef ODP_LIBODP_ETHDEV_DEBUG
#undef ODP_MAX_ETHPORTS
#define ODP_MAX_ETHPORTS 128
#undef ODP_MAX_QUEUES_PER_PORT
#define ODP_MAX_QUEUES_PER_PORT 256
#undef ODP_ETHDEV_QUEUE_STAT_CNTRS
#define ODP_ETHDEV_QUEUE_STAT_CNTRS 16
#undef ODP_ETHDEV_RXTX_CALLBACKS

#undef ODP_LIBODP_ETHDEV_DEBUG
#undef ODP_KNI_PREEMPT_DEFAULT
#define ODP_KNI_PREEMPT_DEFAULT 1
#undef ODP_MEMPOOL_CACHE_MAX_SIZE
#define ODP_MEMPOOL_CACHE_MAX_SIZE 512
#undef ODP_PKTMBUF_HEADROOM
#define ODP_PKTMBUF_HEADROOM 128

#undef ODP_ARCH_X86_64

#undef ODP_ARCH_64
#define ODP_ARCH_64 1
#endif /* __ODP_CONFIG_H */
