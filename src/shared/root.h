#ifndef ROOT_H
#define ROOT_H

#include <mach/mach.h>

kern_return_t elevate_to_root(void);
kern_return_t restore_to_mobile(void);

#endif
