PR = "r0"


BASEPV = "2.61.1"
SRC_URI = "git://github.com/ML-PA-Consulting-GmbH/snapd.git;protocol=https;branch=release/${BASEPV};destsuffix=git/"
PV = "${BASEPV}+git${SRCPV}"
S = "${WORKDIR}/git"

# SRCREV = "12e48ef9a63b92964a57e549107c648887b040eb"
SRCREV = "9d66b5dd364cfb3d83902d3d424ed6b10fd5e878"

DEFAULT_PREFERENCE ??= "-1"

# Allow fetching dependencies during compilation.
# Normally they are a part of the tarball
do_compile[network] = "1"
