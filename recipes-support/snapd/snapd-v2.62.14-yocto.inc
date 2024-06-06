SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "3e98629327b00c2a49dc6506396235f9"
SRC_URI[sha256sum] = "0dcf4a54306db4de7ffc368f39a7b9bab9c28e1050ba61261e8a93b5dee27921"

S = "${WORKDIR}/${PN}-${PV}"