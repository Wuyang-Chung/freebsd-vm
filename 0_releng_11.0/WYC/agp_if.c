/*
 * This file is produced automatically.
 * Do not modify anything in here by hand.
 *
 * Created from source file
 *   /nfs/vm.FreeBSD/sys/dev/agp/agp_if.m
 * with
 *   makeobjops.awk
 *
 * See the source file for legal information
 */

#include <sys/param.h>
#include <sys/queue.h>
#include <sys/kernel.h>
#include <sys/kobj.h>
#include <sys/bus.h>
#include "agp_if.h"


static int
null_agp_chipset_flush(device_t dev)
{
	return (ENXIO);
}

struct kobjop_desc agp_get_aperture_desc = {
	0, { &agp_get_aperture_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc agp_set_aperture_desc = {
	0, { &agp_set_aperture_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc agp_bind_page_desc = {
	0, { &agp_bind_page_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc agp_unbind_page_desc = {
	0, { &agp_unbind_page_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc agp_flush_tlb_desc = {
	0, { &agp_flush_tlb_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc agp_enable_desc = {
	0, { &agp_enable_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc agp_alloc_memory_desc = {
	0, { &agp_alloc_memory_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc agp_free_memory_desc = {
	0, { &agp_free_memory_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc agp_bind_memory_desc = {
	0, { &agp_bind_memory_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc agp_unbind_memory_desc = {
	0, { &agp_unbind_memory_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc agp_chipset_flush_desc = {
	0, { &agp_chipset_flush_desc, (kobjop_t)null_agp_chipset_flush }
};

