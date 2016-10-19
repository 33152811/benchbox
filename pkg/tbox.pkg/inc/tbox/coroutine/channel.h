/*!The Treasure Box Library
 * 
 * TBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * TBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with TBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2009 - 2017, ruki All rights reserved.
 *
 * @author      ruki
 * @file        channel.h
 * @ingroup     coroutine
 *
 */
#ifndef TB_COROUTINE_CHANNEL_H
#define TB_COROUTINE_CHANNEL_H

/* //////////////////////////////////////////////////////////////////////////////////////
 * includes
 */
#include "prefix.h"
#include "../container/container.h"

/* //////////////////////////////////////////////////////////////////////////////////////
 * extern
 */
__tb_extern_c_enter__

/* //////////////////////////////////////////////////////////////////////////////////////
 * types
 */

/// the coroutine channel ref type
typedef __tb_typeref__(co_channel);

/* //////////////////////////////////////////////////////////////////////////////////////
 * interfaces
 */

/*! init channel 
 *
 * @param size          the buffer size, 0: no buffer
 *
 * @return              the channel 
 */
tb_co_channel_ref_t     tb_co_channel_init(tb_size_t size);

/*! exit channel
 *
 * @param channel       the channel
 */
tb_void_t               tb_co_channel_exit(tb_co_channel_ref_t channel);

/*! send data into channel
 *
 * the current coroutine will be suspend if this channel is full 
 *
 * @param channel       the channel
 * @param data          the channel data
 */
tb_void_t               tb_co_channel_send(tb_co_channel_ref_t channel, tb_cpointer_t data);

/*! recv data from channel
 *
 * the current coroutine will be suspend if no data
 *
 * @param channel       the channel
 *
 * @return              the channel data
 */
tb_pointer_t            tb_co_channel_recv(tb_co_channel_ref_t channel);

/* //////////////////////////////////////////////////////////////////////////////////////
 * extern
 */
__tb_extern_c_leave__

#endif
