#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/jss459/Documents/ECE5770/HLS-RSA/rsa_encrypt.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
