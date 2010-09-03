SUBDIRS = modules
bin_PROGRAMS = hello
hello_SOURCES = hello.c

hello_CPPFLAGS = -I$(top_srcdir)/include
hello_LDADD = ../libprojdyn1/libprojdyn1.la
hello_LDADD += ../libprojdyn2/libprojdyn2.la
