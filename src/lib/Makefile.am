AM_CPPFLAGS = -I$(srcdir)/../include

lib_LTLIBRARIES = libkyfd.la libkyfd_static.la

libkyfd_la_SOURCES = decoder.cc decoder-config.cc
libkyfd_la_LDFLAGS = -version-info 0:0:0 -lxerces-c -lfst

libkyfd_static_la_SOURCES = decoder.cc decoder-config.cc
libkyfd_static_la_LDFLAGS = -static -version-info 0:0:0 -lxerces-c -lfst
