(QUOTE
 ((COMPILE-SHIM "gcc -std=gnu99 -DHAVE_CONFIG_H -DMIT_SCHEME "
                "-Wold-style-definition -Wextra -Wno-sign-compare -Wno-unused-parameter -Wstrict-prototypes -Wnested-externs -Wredundant-decls -Wall -Wundef -Wpointer-arith -Winline -O3  -fPIC ")
  (LINK-SHIM "gcc -std=gnu99 " " -shared -fPIC")
  (INSTALL "/usr/bin/install -c --preserve-timestamps -m 644")
  (INFODIR "/usr/local/share/info/")))
