PR = "r0"


BASEPV = "v2.61.8"
SRC_URI = "git://github.com/ML-PA-Consulting-GmbH/snapd.git;protocol=https;branch=release/${BASEPV};destsuffix=git/"
PV = "${BASEPV}+git${SRCPV}"
S = "${WORKDIR}/git"

SRCREV = "ecc1d5cb6519aad3b0bc47572000b5bd6f463ffa"

DEFAULT_PREFERENCE ??= "-1"

# Allow fetching dependencies during compilation.
# Normally they are a part of the tarball
do_compile[network] = "1"
