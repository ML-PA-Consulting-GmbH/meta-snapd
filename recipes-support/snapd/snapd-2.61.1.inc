SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "b0f6a5f3c5170ce9d4d8d7dba6ea1fe1"
SRC_URI[sha256sum] = "74364cfdee4f62f014110a5fbd7f05aabee2f274166d5627c99e3ad85d43116b"

S = "${WORKDIR}/${PN}-${PV}"
