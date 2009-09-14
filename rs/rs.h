/*
 *  Hamlib R&S backend - main header
 *  Copyright (c) 2009 by Stephane Fillod
 *
 *	$Id: rs.h,v 1.1 2009/08/07 22:15:49 fillods Exp $
 *
 *   This library is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU Library General Public License as
 *   published by the Free Software Foundation; either version 2 of
 *   the License, or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Library General Public License for more details.
 *
 *   You should have received a copy of the GNU Library General Public
 *   License along with this library; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef _RS_H
#define _RS_H 1

#include <hamlib/rig.h>


int rs_set_freq(RIG *rig, vfo_t vfo, freq_t freq);
int rs_get_freq(RIG *rig, vfo_t vfo, freq_t *freq);
int rs_set_mode(RIG *rig, vfo_t vfo, rmode_t mode, pbwidth_t width);
int rs_get_mode(RIG *rig, vfo_t vfo, rmode_t *mode, pbwidth_t *width);
int rs_set_func(RIG *rig, vfo_t vfo, setting_t func, int status);
int rs_get_func(RIG *rig, vfo_t vfo, setting_t func, int *status);
int rs_set_level(RIG *rig, vfo_t vfo, setting_t level, value_t val);
int rs_get_level(RIG *rig, vfo_t vfo, setting_t level, value_t *val);
const char * rs_get_info(RIG *rig);

extern const struct rig_caps esmc_caps;

#endif /* _RS_H */