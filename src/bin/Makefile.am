AM_CPPFLAGS = -g -Wall -I$(srcdir)/../include
AM_LDFLAGS = -lfst -lxerces-c -ldl

bin_PROGRAMS = kyfd componentcompose beamtrim buildfstmodel ckyfd

kyfd_SOURCES = kyfd.cc
kyfd_LDFLAGS = -static -avoid-version -no-undefined
kyfd_LDADD = ../lib/libkyfd.la ${AM_LDFLAGS}

componentcompose_SOURCES = componentcompose.cc
componentcompose_LDFLAGS = -static -avoid-version -no-undefined
componentcompose_LDADD = ../lib/libkyfd.la ${AM_LDFLAGS}

buildfstmodel_SOURCES = buildfstmodel.cc
buildfstmodel_LDADD = ../lib/libkyfd.la ${AM_LDFLAGS}

beamtrim_SOURCES = beamtrim.cc
beamtrim_LDFLAGS = -static -avoid-version -no-undefined
beamtrim_LDADD = ../lib/libkyfd.la ${AM_LDFLAGS}

# using C compiler
AM_CFLAGS = -g -Wall -I$(srcdir)/../include
ckyfd_SOURCES = ckyfd.cc
ckyfd_LDFLAGS = -static -avoid-version -no-undefined
ckyfd_LDADD = ../lib/libkyfd.la ../lib/libckyfd.la ${AM_LDFLAGS}
