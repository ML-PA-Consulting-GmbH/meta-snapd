SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "2612bf7dc2f767419c90c50da055f967"
SRC_URI[sha256sum] = "8788047e6314e2b697afb92c0e49f3b1e1da5afa930333fb2f627b8d731a7a24"

S = "${WORKDIR}/${PN}-${PV}"
