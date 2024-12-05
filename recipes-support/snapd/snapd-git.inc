PR = "r0"


BASEPV = "v2.61.9"
SRC_URI = "git://github.com/ML-PA-Consulting-GmbH/snapd.git;protocol=https;branch=release/${BASEPV};destsuffix=git/"
PV = "${BASEPV}+git${SRCPV}"
S = "${WORKDIR}/git"

SRCREV = "c616729aeaa0c26ce01447c2322509cf62ea1839"

DEFAULT_PREFERENCE ??= "-1"

# Allow fetching dependencies during compilation.
# Normally they are a part of the tarball
do_compile[network] = "1"
