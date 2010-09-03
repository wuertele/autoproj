/**
***	module.h		plugin interface
***
***	David Wuertele		Fri Sep  3 12:10:19 2010
***
***	Steal This Program!!!
**/

#ifndef __MODULE_SEEN__	/* Protect against re-inclusion of this file. */
#define __MODULE_SEEN__

# define GET_SALUTATION_SYM "get_salutation"

  typedef char * get_salutation_t(void);

  char * get_salutation(void);

#endif /* __MODULE_SEEN__ */
