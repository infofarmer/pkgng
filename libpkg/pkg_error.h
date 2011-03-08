#ifndef _PKG_ERROR_H
#define _PKG_ERROR_H

#define ERROR_BAD_ARG(name) \
	pkg_error_set(EPKG_FATAL, "Bad argument %s in %s", name, __FUNCTION__)

#define ERROR_SQLITE(db) \
	pkg_error_set(EPKG_FATAL, "sqlite: %s", sqlite3_errmsg(db))

pkg_error_t pkg_error_set(pkg_error_t, const char *, ...);
pkg_error_t pkg_error_seterrno(void);

#endif