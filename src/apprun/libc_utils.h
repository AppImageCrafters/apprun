/**************************************************************************
 *
 * Copyright (c) 2022 Alexis Lopez Zubieta <contact@azubieta.net>
 *
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 **************************************************************************/

#ifndef APPIMAGEEXECWRAPPER_LIBC_UTILS_H
#define APPIMAGEEXECWRAPPER_LIBC_UTILS_H


/**
 * Seek for the first occurrence of libc.so.6 path in "/etc/ld.so.cache"
 * @return string libc.so.6 path on success, NULL if nothing is found
 */
char* apprun_read_glibc_path_from_so_cache();


#define GLIBC_VERSION_STRING_REGEX "glibc [0-9]+\\.[0-9]+(\\.[0-9]+)*"

/**
 * Seek through the libc.so.6 binary file for an occurrence of LIBC_VERSION_STRING_REGEX
 * @return Matched string version on success, otherwise NULL
 */
char* apprun_read_glibc_version_from_lib(const char* libc_path);

#endif //APPIMAGEEXECWRAPPER_LIBC_UTILS_H
