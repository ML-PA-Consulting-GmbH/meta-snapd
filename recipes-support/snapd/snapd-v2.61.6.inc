SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "d8bd3828009bec00a99129dfcadfb2a6"
SRC_URI[sha256sum] = "ed0466ac2bf321d608b088aefce49d4d1e11ff1ce2e3c242f8ba40ea1ba44923"

S = "${WORKDIR}/${PN}-${PV}"
