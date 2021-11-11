/*
 * frontier client zlib support header
 * 
 * Author: Sergey Kosyakov
 *
 * $Id$
 *
 * Copyright (c) 2009, FERMI NATIONAL ACCELERATOR LABORATORY
 * All rights reserved. 
 *
 * For details of the Fermitools (BSD) license see Fermilab-2009.txt or
 *  http://fermitools.fnal.gov/about/terms.html
 *
 */
#ifndef __H__FN_ZLIB_H
#define __H__FN_ZLIB_H

#define MAX_STR2URL_SIZE	(1024*1024)      // 1MiB

#define FN_ZLIB_E_SMALLBUF	-1
#define FN_ZLIB_E_NOMEM		-2
#define FN_ZLIB_E_OTHER		-3
#define FN_ZLIB_E_TOOBIG	-4

#include "zlib.h"

long fn_gzip_str(z_stream **dezstream_ptr,const char *src,long src_size,char *dest,long dest_size);
void fn_decleanup(z_stream **dezstream_ptr);
void fn_incleanup(z_stream **inzstream_ptr);
int fn_gunzip_init(z_stream **inzstream_ptr);
int fn_gunzip_update(z_stream*inzstream, unsigned char *src,int *src_size,const unsigned char *dest,int *dest_size,int final);


#endif //__H__FN_ZLIB_H
