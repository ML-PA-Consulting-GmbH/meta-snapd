SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "89ce3e65291645b0ace0f7dc892420d6"
SRC_URI[sha256sum] = "6603f850fdbffb2db81fe33e89044cf68276c026a10f73cf227a25f939b9f510"

S = "${WORKDIR}/${PN}-${PV}"