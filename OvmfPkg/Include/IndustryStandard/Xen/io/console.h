/******************************************************************************
 * console.h
 *
 * Console I/O interface for Xen guest OSes.
 *
 * SPDX-License-Identifier: MIT
 *
 * Copyright (c) 2005, Keir Fraser
 */

#ifndef __XEN_PUBLIC_IO_CONSOLE_H__
#define __XEN_PUBLIC_IO_CONSOLE_H__

typedef UINT32 XENCONS_RING_IDX;

#define MASK_XENCONS_IDX(idx, ring)  ((idx) & (sizeof(ring)-1))

struct xencons_interface {
  char in[1024];
  char                out[2048];
  XENCONS_RING_IDX    in_cons, in_prod;
  XENCONS_RING_IDX    out_cons, out_prod;
};

#endif /* __XEN_PUBLIC_IO_CONSOLE_H__ */

/*
 * Local variables:
 * mode: C
 * c-file-style: "BSD"
 * c-basic-offset: 4
 * tab-width: 4
 * indent-tabs-mode: nil
 * End:
 */
