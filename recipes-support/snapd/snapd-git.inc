BASEPV = "v2.62.14-yocto"
SRC_URI = "git://github.com/ML-PA-Consulting-GmbH/snapd.git;protocol=https;branch=release/${BASEPV};destsuffix=git/"
PV = "${BASEPV}+git${SRCPV}"
S = "${WORKDIR}/git"

# SRCREV = "40efd81c2f35213eabf2df83fb9efabe88fa124e"
SRCREV = "2502a253b73bb7ddcaae4993435fd7d02f2febe2"

DEFAULT_PREFERENCE ??= "-1"

# Allow fetching dependencies during compilation.
# Normally they are a part of the tarball
do_compile[network] = "1"
