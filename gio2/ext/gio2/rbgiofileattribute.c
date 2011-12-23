/* -*- c-file-style: "ruby"; indent-tabs-mode: nil -*- */
/*
 *  Copyright (C) 2011  Ruby-GNOME2 Project Team
 *  Copyright (C) 2008-2009  Ruby-GNOME2 Project Team
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA  02110-1301  USA
 */

#include "rbgio2private.h"

#define RG_TARGET_NAMESPACE mFileAttribute

void
Init_gfileattribute(VALUE mGio)
{
        VALUE RG_TARGET_NAMESPACE;

        RG_TARGET_NAMESPACE = rb_define_module_under(mGio, "FileAttribute");

        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_TYPE", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_TYPE));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_IS_HIDDEN", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_IS_HIDDEN));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_IS_BACKUP", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_IS_BACKUP));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_IS_SYMLINK", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_IS_SYMLINK));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_IS_VIRTUAL", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_IS_VIRTUAL));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_NAME", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_NAME));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_DISPLAY_NAME", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_EDIT_NAME", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_EDIT_NAME));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_COPY_NAME", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_COPY_NAME));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_DESCRIPTION", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_DESCRIPTION));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_ICON", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_ICON));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_CONTENT_TYPE", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_FAST_CONTENT_TYPE", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_FAST_CONTENT_TYPE));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_SIZE", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_SIZE));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_ALLOCATED_SIZE", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_ALLOCATED_SIZE));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_SYMLINK_TARGET", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_SYMLINK_TARGET));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_TARGET_URI", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_TARGET_URI));
        rb_define_const(RG_TARGET_NAMESPACE, "STANDARD_SORT_ORDER", CSTR2RVAL(G_FILE_ATTRIBUTE_STANDARD_SORT_ORDER));
        rb_define_const(RG_TARGET_NAMESPACE, "ETAG_VALUE", CSTR2RVAL(G_FILE_ATTRIBUTE_ETAG_VALUE));
        rb_define_const(RG_TARGET_NAMESPACE, "ID_FILE", CSTR2RVAL(G_FILE_ATTRIBUTE_ID_FILE));
        rb_define_const(RG_TARGET_NAMESPACE, "ID_FILESYSTEM", CSTR2RVAL(G_FILE_ATTRIBUTE_ID_FILESYSTEM));
        rb_define_const(RG_TARGET_NAMESPACE, "ACCESS_CAN_READ", CSTR2RVAL(G_FILE_ATTRIBUTE_ACCESS_CAN_READ));
        rb_define_const(RG_TARGET_NAMESPACE, "ACCESS_CAN_WRITE", CSTR2RVAL(G_FILE_ATTRIBUTE_ACCESS_CAN_WRITE));
        rb_define_const(RG_TARGET_NAMESPACE, "ACCESS_CAN_EXECUTE", CSTR2RVAL(G_FILE_ATTRIBUTE_ACCESS_CAN_EXECUTE));
        rb_define_const(RG_TARGET_NAMESPACE, "ACCESS_CAN_DELETE", CSTR2RVAL(G_FILE_ATTRIBUTE_ACCESS_CAN_DELETE));
        rb_define_const(RG_TARGET_NAMESPACE, "ACCESS_CAN_TRASH", CSTR2RVAL(G_FILE_ATTRIBUTE_ACCESS_CAN_TRASH));
        rb_define_const(RG_TARGET_NAMESPACE, "ACCESS_CAN_RENAME", CSTR2RVAL(G_FILE_ATTRIBUTE_ACCESS_CAN_RENAME));
        rb_define_const(RG_TARGET_NAMESPACE, "MOUNTABLE_CAN_MOUNT", CSTR2RVAL(G_FILE_ATTRIBUTE_MOUNTABLE_CAN_MOUNT));
        rb_define_const(RG_TARGET_NAMESPACE, "MOUNTABLE_CAN_UNMOUNT", CSTR2RVAL(G_FILE_ATTRIBUTE_MOUNTABLE_CAN_UNMOUNT));
        rb_define_const(RG_TARGET_NAMESPACE, "MOUNTABLE_CAN_EJECT", CSTR2RVAL(G_FILE_ATTRIBUTE_MOUNTABLE_CAN_EJECT));
        rb_define_const(RG_TARGET_NAMESPACE, "MOUNTABLE_UNIX_DEVICE", CSTR2RVAL(G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE));
        rb_define_const(RG_TARGET_NAMESPACE, "MOUNTABLE_UNIX_DEVICE_FILE", CSTR2RVAL(G_FILE_ATTRIBUTE_MOUNTABLE_UNIX_DEVICE_FILE));
        rb_define_const(RG_TARGET_NAMESPACE, "MOUNTABLE_HAL_UDI", CSTR2RVAL(G_FILE_ATTRIBUTE_MOUNTABLE_HAL_UDI));
        rb_define_const(RG_TARGET_NAMESPACE, "MOUNTABLE_CAN_POLL", CSTR2RVAL(G_FILE_ATTRIBUTE_MOUNTABLE_CAN_POLL));
        rb_define_const(RG_TARGET_NAMESPACE, "MOUNTABLE_IS_MEDIA_CHECK_AUTOMATIC", CSTR2RVAL(G_FILE_ATTRIBUTE_MOUNTABLE_IS_MEDIA_CHECK_AUTOMATIC));
        rb_define_const(RG_TARGET_NAMESPACE, "MOUNTABLE_CAN_START", CSTR2RVAL(G_FILE_ATTRIBUTE_MOUNTABLE_CAN_START));
        rb_define_const(RG_TARGET_NAMESPACE, "MOUNTABLE_CAN_START_DEGRADED", CSTR2RVAL(G_FILE_ATTRIBUTE_MOUNTABLE_CAN_START_DEGRADED));
        rb_define_const(RG_TARGET_NAMESPACE, "MOUNTABLE_CAN_STOP", CSTR2RVAL(G_FILE_ATTRIBUTE_MOUNTABLE_CAN_STOP));
        rb_define_const(RG_TARGET_NAMESPACE, "MOUNTABLE_START_STOP_TYPE", CSTR2RVAL(G_FILE_ATTRIBUTE_MOUNTABLE_START_STOP_TYPE));
        rb_define_const(RG_TARGET_NAMESPACE, "TIME_MODIFIED", CSTR2RVAL(G_FILE_ATTRIBUTE_TIME_MODIFIED));
        rb_define_const(RG_TARGET_NAMESPACE, "TIME_MODIFIED_USEC", CSTR2RVAL(G_FILE_ATTRIBUTE_TIME_MODIFIED_USEC));
        rb_define_const(RG_TARGET_NAMESPACE, "TIME_ACCESS", CSTR2RVAL(G_FILE_ATTRIBUTE_TIME_ACCESS));
        rb_define_const(RG_TARGET_NAMESPACE, "TIME_ACCESS_USEC", CSTR2RVAL(G_FILE_ATTRIBUTE_TIME_ACCESS_USEC));
        rb_define_const(RG_TARGET_NAMESPACE, "TIME_CHANGED", CSTR2RVAL(G_FILE_ATTRIBUTE_TIME_CHANGED));
        rb_define_const(RG_TARGET_NAMESPACE, "TIME_CHANGED_USEC", CSTR2RVAL(G_FILE_ATTRIBUTE_TIME_CHANGED_USEC));
        rb_define_const(RG_TARGET_NAMESPACE, "TIME_CREATED", CSTR2RVAL(G_FILE_ATTRIBUTE_TIME_CREATED));
        rb_define_const(RG_TARGET_NAMESPACE, "TIME_CREATED_USEC", CSTR2RVAL(G_FILE_ATTRIBUTE_TIME_CREATED_USEC));
        rb_define_const(RG_TARGET_NAMESPACE, "UNIX_DEVICE", CSTR2RVAL(G_FILE_ATTRIBUTE_UNIX_DEVICE));
        rb_define_const(RG_TARGET_NAMESPACE, "UNIX_INODE", CSTR2RVAL(G_FILE_ATTRIBUTE_UNIX_INODE));
        rb_define_const(RG_TARGET_NAMESPACE, "UNIX_MODE", CSTR2RVAL(G_FILE_ATTRIBUTE_UNIX_MODE));
        rb_define_const(RG_TARGET_NAMESPACE, "UNIX_NLINK", CSTR2RVAL(G_FILE_ATTRIBUTE_UNIX_NLINK));
        rb_define_const(RG_TARGET_NAMESPACE, "UNIX_UID", CSTR2RVAL(G_FILE_ATTRIBUTE_UNIX_UID));
        rb_define_const(RG_TARGET_NAMESPACE, "UNIX_GID", CSTR2RVAL(G_FILE_ATTRIBUTE_UNIX_GID));
        rb_define_const(RG_TARGET_NAMESPACE, "UNIX_RDEV", CSTR2RVAL(G_FILE_ATTRIBUTE_UNIX_RDEV));
        rb_define_const(RG_TARGET_NAMESPACE, "UNIX_BLOCK_SIZE", CSTR2RVAL(G_FILE_ATTRIBUTE_UNIX_BLOCK_SIZE));
        rb_define_const(RG_TARGET_NAMESPACE, "UNIX_BLOCKS", CSTR2RVAL(G_FILE_ATTRIBUTE_UNIX_BLOCKS));
        rb_define_const(RG_TARGET_NAMESPACE, "UNIX_IS_MOUNTPOINT", CSTR2RVAL(G_FILE_ATTRIBUTE_UNIX_IS_MOUNTPOINT));
        rb_define_const(RG_TARGET_NAMESPACE, "DOS_IS_ARCHIVE", CSTR2RVAL(G_FILE_ATTRIBUTE_DOS_IS_ARCHIVE));
        rb_define_const(RG_TARGET_NAMESPACE, "DOS_IS_SYSTEM", CSTR2RVAL(G_FILE_ATTRIBUTE_DOS_IS_SYSTEM));
        rb_define_const(RG_TARGET_NAMESPACE, "OWNER_USER", CSTR2RVAL(G_FILE_ATTRIBUTE_OWNER_USER));
        rb_define_const(RG_TARGET_NAMESPACE, "OWNER_USER_REAL", CSTR2RVAL(G_FILE_ATTRIBUTE_OWNER_USER_REAL));
        rb_define_const(RG_TARGET_NAMESPACE, "OWNER_GROUP", CSTR2RVAL(G_FILE_ATTRIBUTE_OWNER_GROUP));
        rb_define_const(RG_TARGET_NAMESPACE, "THUMBNAIL_PATH", CSTR2RVAL(G_FILE_ATTRIBUTE_THUMBNAIL_PATH));
        rb_define_const(RG_TARGET_NAMESPACE, "THUMBNAILING_FAILED", CSTR2RVAL(G_FILE_ATTRIBUTE_THUMBNAILING_FAILED));
        rb_define_const(RG_TARGET_NAMESPACE, "PREVIEW_ICON", CSTR2RVAL(G_FILE_ATTRIBUTE_PREVIEW_ICON));
        rb_define_const(RG_TARGET_NAMESPACE, "FILESYSTEM_SIZE", CSTR2RVAL(G_FILE_ATTRIBUTE_FILESYSTEM_SIZE));
        rb_define_const(RG_TARGET_NAMESPACE, "FILESYSTEM_FREE", CSTR2RVAL(G_FILE_ATTRIBUTE_FILESYSTEM_FREE));
        rb_define_const(RG_TARGET_NAMESPACE, "FILESYSTEM_TYPE", CSTR2RVAL(G_FILE_ATTRIBUTE_FILESYSTEM_TYPE));
        rb_define_const(RG_TARGET_NAMESPACE, "FILESYSTEM_READONLY", CSTR2RVAL(G_FILE_ATTRIBUTE_FILESYSTEM_READONLY));
        rb_define_const(RG_TARGET_NAMESPACE, "FILESYSTEM_USE_PREVIEW", CSTR2RVAL(G_FILE_ATTRIBUTE_FILESYSTEM_USE_PREVIEW));
        rb_define_const(RG_TARGET_NAMESPACE, "GVFS_BACKEND", CSTR2RVAL(G_FILE_ATTRIBUTE_GVFS_BACKEND));
        rb_define_const(RG_TARGET_NAMESPACE, "SELINUX_CONTEXT", CSTR2RVAL(G_FILE_ATTRIBUTE_SELINUX_CONTEXT));
        rb_define_const(RG_TARGET_NAMESPACE, "TRASH_ITEM_COUNT", CSTR2RVAL(G_FILE_ATTRIBUTE_TRASH_ITEM_COUNT));
        rb_define_const(RG_TARGET_NAMESPACE, "TRASH_DELETION_DATE", CSTR2RVAL(G_FILE_ATTRIBUTE_TRASH_DELETION_DATE));
        rb_define_const(RG_TARGET_NAMESPACE, "TRASH_ORIG_PATH", CSTR2RVAL(G_FILE_ATTRIBUTE_TRASH_ORIG_PATH));

        G_DEF_CLASS(G_TYPE_FILE_ATTRIBUTE_TYPE, "Type", RG_TARGET_NAMESPACE);
        G_DEF_CONSTANTS(RG_TARGET_NAMESPACE, G_TYPE_FILE_ATTRIBUTE_TYPE, "G_FILE_ATTRIBUTE_");

        G_DEF_CLASS(G_TYPE_FILE_ATTRIBUTE_STATUS, "Status", RG_TARGET_NAMESPACE);
        G_DEF_CONSTANTS(RG_TARGET_NAMESPACE, G_TYPE_FILE_ATTRIBUTE_STATUS, "G_FILE_ATTRIBUTE_");
}
