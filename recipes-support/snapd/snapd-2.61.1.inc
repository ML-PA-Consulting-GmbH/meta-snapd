SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "6003d2116a2f853cd9e58d1cfba2d577"
SRC_URI[sha256sum] = "bf0633ad25a718e305b2babf4516abdcb0bf6ab88543f70f9dc2343b1188bc6f"

S = "${WORKDIR}/${PN}-${PV}"
