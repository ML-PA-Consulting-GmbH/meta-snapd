SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "eba33d012609a4277790a9c7ada5c6ab"
SRC_URI[sha256sum] = "42580f954b98788907ea252e3977a577a8a7bd83a13608bd830a8fd3369efd53"

S = "${WORKDIR}/${PN}-${PV}"
