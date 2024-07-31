SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "bb2160e0463ef42658025752ab77a34a"
SRC_URI[sha256sum] = "24dd6102b2053fd6fce300cac91af084cba1031a1921b09acf401a8d7e6f78aa"

S = "${WORKDIR}/${PN}-${PV}"
