/*
 * Virt Viewer: A virtual machine console viewer
 *
 * Copyright (C) 2007-2009 Red Hat,
 * Copyright (C) 2009 Daniel P. Berrange
 * Copyright (C) 2010 Marc-André Lureau
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Daniel P. Berrange <berrange@redhat.com>
 */
#ifndef _VIRT_VIEWER_DISPLAY_VNC_H
#define _VIRT_VIEWER_DISPLAY_VNC_H

#include <glib-object.h>
#include <vncdisplay.h>

#include "display.h"

G_BEGIN_DECLS

#define VIRT_VIEWER_TYPE_DISPLAY_VNC virt_viewer_display_vnc_get_type()

#define VIRT_VIEWER_DISPLAY_VNC(obj)					\
	(G_TYPE_CHECK_INSTANCE_CAST ((obj), VIRT_VIEWER_TYPE_DISPLAY_VNC, VirtViewerDisplayVNC))

#define VIRT_VIEWER_DISPLAY_VNC_CLASS(klass)				\
	(G_TYPE_CHECK_CLASS_CAST ((klass), VIRT_VIEWER_TYPE_DISPLAY_VNC, VirtViewerDisplayVNCClass))

#define VIRT_IS_VIEWER_DISPLAY_VNC(obj)					\
	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), VIRT_VIEWER_TYPE_DISPLAY_VNC))

#define VIRT_IS_VIEWER_DISPLAY_VNC_CLASS(klass)				\
	(G_TYPE_CHECK_CLASS_TYPE ((klass), VIRT_VIEWER_TYPE_DISPLAY_VNC))

#define VIRT_VIEWER_DISPLAY_VNC_GET_CLASS(obj)				\
	(G_TYPE_INSTANCE_GET_CLASS ((obj), VIRT_VIEWER_TYPE_DISPLAY_VNC, VirtViewerDisplayVNCClass))

typedef struct {
	VirtViewerDisplay parent;

	VncDisplay *vnc;
} VirtViewerDisplayVNC;

typedef struct {
	VirtViewerDisplayClass parent_class;
} VirtViewerDisplayVNCClass;

GType virt_viewer_display_vnc_get_type(void);

VirtViewerDisplayVNC* virt_viewer_display_vnc_new(VirtViewer *viewer);

G_END_DECLS

#endif /* _VIRT_VIEWER_DISPLAY_VNC_H */

/*
 * Local variables:
 *  c-indent-level: 8
 *  c-basic-offset: 8
 *  tab-width: 8
 * End:
 */