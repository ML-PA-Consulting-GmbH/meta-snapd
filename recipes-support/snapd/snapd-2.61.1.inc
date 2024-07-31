SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "201de7cf495c0c5cdd78302dc7c1aef4"
SRC_URI[sha256sum] = "73cc01106489961846862aa2ef41205499ea6866746d02228e77c4040b8be4d0"

S = "${WORKDIR}/${PN}-${PV}"
