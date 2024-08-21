SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "a34ca72f8db61b2982a73f968c3e95bf"
SRC_URI[sha256sum] = "ede0b74f92d70947bb072a0988d243344688a52bb024e83c155a197a812e39b5"

S = "${WORKDIR}/${PN}-${PV}"
