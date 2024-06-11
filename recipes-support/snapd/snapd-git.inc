BASEPV = "v2.57.2.4-yocto"
SRC_URI = "git://github.com/ML-PA-Consulting-GmbH/snapd.git;protocol=https;branch=release/${BASEPV};destsuffix=git/"
PV = "${BASEPV}+git${SRCPV}"
S = "${WORKDIR}/git"

# SRCREV = "40efd81c2f35213eabf2df83fb9efabe88fa124e"
SRCREV = "dcc452611e6ac8b62c9acf04be5cba7ef7f54fd6"

DEFAULT_PREFERENCE ??= "-1"

# Allow fetching dependencies during compilation.
# Normally they are a part of the tarball
do_compile[network] = "1"
