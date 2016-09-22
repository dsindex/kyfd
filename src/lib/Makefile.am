AM_CPPFLAGS = -I$(srcdir)/../include

lib_LTLIBRARIES = libkyfd.la libckyfd.la

libkyfd_la_SOURCES = decoder.cc decoder-config.cc
libkyfd_la_LDFLAGS = -version-info 0:0:0 -lxerces-c -lfst

libckyfd_la_SOURCES = api.cc
#libckyfd_la_LDFLAGS = -version-info 0:0:0 -lxerces-c -lfst libkyfd.la
libckyfd_la_LDFLAGS = -version-info 0:0:0
