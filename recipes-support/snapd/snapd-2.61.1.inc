SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "5e2661714f559d64adab2966784cc035"
SRC_URI[sha256sum] = "62c9d767c44d2e8ad4036d4187746112233f9ed140adc4f8ae6301c40c1b7477"

S = "${WORKDIR}/${PN}-${PV}"
