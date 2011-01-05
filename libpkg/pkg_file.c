#include <stdlib.h>

#include "pkg.h"
#include "pkg_private.h"

const char *
pkg_file_path(struct pkg_file *file)
{
	return (file->path);
}

const char *
pkg_file_md5(struct pkg_file *file)
{
	return (file->md5);
}

int
pkg_file_new(struct pkg_file **file)
{
	if ((*file = calloc(1, sizeof(struct pkg_file))))
		return (-1);
	return (0);
}

void
pkg_file_reset(struct pkg_file *file)
{
	file->path[0] = '\0';
	file->md5[0] = '\0';
}

void
pkg_file_free(struct pkg_file *file)
{
	free(file);
}