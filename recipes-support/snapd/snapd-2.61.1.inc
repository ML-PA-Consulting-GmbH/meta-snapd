SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "47410d381cabb203afa566c0dee5390c"
SRC_URI[sha256sum] = "42d3347b21721e603960ec389276ea53a1dd2950d603cca6c1d7a9aba9b307f9"

S = "${WORKDIR}/${PN}-${PV}"
