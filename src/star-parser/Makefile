# Copyright (C) 1986, 1987, 1988, 1989, 1990, 1991, 1992, 1993, 1994,
#     1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004,
#     2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014
#     Massachusetts Institute of Technology
#
# This file is part of MIT/GNU Scheme.
#
# MIT/GNU Scheme is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License as
# published by the Free Software Foundation; either version 2 of the
# License, or (at your option) any later version.
#
# MIT/GNU Scheme is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with MIT/GNU Scheme; if not, write to the Free Software
# Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
# 02110-1301, USA.

# Standard Makefile for Scheme subsystem directories.
# This makefile supports some utilities for Scheme subsystems.
# Tools to rebuild these subsystems are written in Scheme and do not
# use `make'.

# **** BEGIN BOILERPLATE ****

SHELL = /bin/sh



srcdir = .
top_srcdir = ..

prefix = /usr/local
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datarootdir = ${prefix}/share
datadir = ${datarootdir}
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${datarootdir}/info
mandir = ${datarootdir}/man
includedir = ${prefix}/include
oldincludedir = /usr/include

DESTDIR =
top_builddir = ..

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL}
INSTALL_COM = $(INSTALL_DATA)

LN_S = ln -s
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
mkinstalldirs = $(SHELL) $(top_srcdir)/microcode/mkinstalldirs

# **** END BOILERPLATE ****

CC = gcc
CCLD = @CCLD@

DEFS = -DPACKAGE_NAME=\"MIT/GNU\ Scheme\" -DPACKAGE_TARNAME=\"mit-scheme\" -DPACKAGE_VERSION=\"9.2\" -DPACKAGE_STRING=\"MIT/GNU\ Scheme\ 9.2\" -DPACKAGE_BUGREPORT=\"bug-mit-scheme@gnu.org\" -DPACKAGE_URL=\"\" -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1
CFLAGS = -g -O2
CPPFLAGS =  -I../lib
LDFLAGS = 

COMPILE = $(CC) $(DEFS) $(CPPFLAGS) $(CFLAGS)
LINK = $(CCLD) $(LDFLAGS) -o $@

AUXDIR = $(libdir)/mit-scheme-x86-64

all:
	echo "No ALL action"

mostlyclean clean distclean maintainer-clean:
	./Clean.sh $@

tags TAGS:
	./Tags.sh

stage1:
	./Stage.sh make 1

unstage1:
	./Stage.sh unmake 1

stage2:
	./Stage.sh make 2

unstage2:
	./Stage.sh unmake 2

stage3:
	./Stage.sh make 3

unstage3:
	./Stage.sh unmake 3

PARSER_DIR = $(AUXDIR)/star-parser

install:
	$(mkinstalldirs) $(DESTDIR)$(PARSER_DIR)
	$(INSTALL_COM) *.com $(DESTDIR)$(PARSER_DIR)/.
	$(INSTALL_DATA) *.pkd *.bci $(DESTDIR)$(PARSER_DIR)/.
	$(INSTALL_DATA) $(srcdir)/load.scm $(DESTDIR)$(PARSER_DIR)/.

.PHONY: all mostlyclean clean distclean maintainer-clean tags TAGS
.PHONY: stage1 unstage1 stage2 unstage2 stage3 unstage3 install
