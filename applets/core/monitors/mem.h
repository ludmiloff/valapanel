/*
 * vala-panel
 * Copyright (C) 2018 Konstantin Pugin <ria.freelander@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MEM_H
#define MEM_H

#include "monitor.h"

G_BEGIN_DECLS

#define DISPLAY_RAM "display-ram-monitor"
#define RAM_CL "ram-color"
#define RAM_WIDTH "ram-width"

G_GNUC_INTERNAL bool update_mem(Monitor *m);
G_GNUC_INTERNAL void tooltip_update_mem(Monitor *m);

G_END_DECLS

#endif // MONITORS_H
