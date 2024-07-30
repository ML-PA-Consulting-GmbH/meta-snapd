SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "0bbdd40713bacf95177db0918efe4904"
SRC_URI[sha256sum] = "fa3258aaeb763a476f7d95c853a7b8ab06a2b3783314185d9930122e321785f8"

S = "${WORKDIR}/${PN}-${PV}"
