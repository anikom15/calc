# Filename: configure.ac

#  Copyright 2022 W. M. Martinez
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License. 

#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
m4_define([calc_VERSION],
	  m4_esyscmd_s([cat VERSION]))
AC_COPYRIGHT([Copyright 2022 W. M. Martinez])
AC_REVISION([Revision 1])
AC_INIT([calc], m4_defn([calc_VERSION]), [anikom15@outlook.com],
	, [https://github.com/anikom15/calc])
AM_INIT_AUTOMAKE([-Wall -Werror])

# Checks for programs.
AC_PROG_CC  

AC_CHECK_HEADERS([stdlib.h])
AC_CONFIG_SRCDIR([src/stack.c])
AC_CONFIG_HEADERS([config.h]) 

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions. 

AC_CONFIG_FILES([Makefile
		 src/Makefile])

AC_OUTPUT
