AM_CPPFLAGS = -g -Wall -I$(srcdir)/../include
AM_LDFLAGS = -lfst -lxerces-c -ldl

bin_PROGRAMS = kyfd componentcompose beamtrim buildfstmodel

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
