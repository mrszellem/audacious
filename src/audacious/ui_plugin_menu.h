/*  Audacious - Cross-platform multimedia player
 *  Copyright (C) 2005-2007  Audacious development team.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; under version 3 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses>.
 *
 *  The Audacious team does not consider modular code linking to
 *  Audacious or using our public API to be a derived work.
 */

/* these functions are currently implemented in ui_manager.c */

#ifndef AUD_UIPLUGINMENU_H
#define AUD_UIPLUGINMENU_H


#include <glib.h>
#include <glib/gi18n.h>
#include <gtk/gtk.h>


#define AUDACIOUS_MENU_MAIN        0
#define AUDACIOUS_MENU_PLAYLIST    1

gint audacious_menu_plugin_item_add( gint , GtkWidget * );
gint audacious_menu_plugin_item_remove( gint , GtkWidget * );


#endif /* AUD_UIPLUGINMENU_H */
