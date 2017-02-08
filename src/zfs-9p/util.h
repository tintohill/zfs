/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */
/*
 * Copyright 2006 Ricardo Correia.
 * Use is subject to license terms.
 */

#ifndef ZFSFUSE_UTIL_H
#define ZFSFUSE_UTIL_H

#include <sys/types.h>
#include <sys/vfs.h>

extern int do_init();
extern int do_init_fusesocket();
extern void do_daemon(const char *pidfile);
extern void do_exit();
extern int do_mount(char *spec, char *dir, int mflag, char *opt);
extern int do_umount(vfs_t *vfs, boolean_t force);

extern char * fuse_mount_options; /* run-time mount options */
void print_debug(const char *fmt, ...);
char *getUserName(uid_t uid);
char *getGroupName(gid_t gid);

#endif