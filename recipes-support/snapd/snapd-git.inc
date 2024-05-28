PR = "r0"


BASEPV = "v2.62.13"
PV = "${BASEPV}+git${SRCPV}"
S = "${WORKDIR}/git"
DEFAULT_PREFERENCE ??= "-1"

# Allow fetching dependencies during compilation.
# Normally they are a part of the tarball
do_compile[network] = "1"
