PR = "r0"


BASEPV = "v2.61.14-yocto"
SRC_URI = "git://github.com/snapcore/snapd.git;protocol=https;branch=release/${BASEPV};destsuffix=git/"
PV = "${BASEPV}+git${SRCPV}"
S = "${WORKDIR}/git"

SRCREV = "12e48ef9a63b92964a57e549107c648887b040eb"

DEFAULT_PREFERENCE ??= "-1"

# Allow fetching dependencies during compilation.
# Normally they are a part of the tarball
do_compile[network] = "1"
