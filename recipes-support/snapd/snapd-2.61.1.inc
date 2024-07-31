SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "31cf1e6a6866db813d9520d14bb438bc"
SRC_URI[sha256sum] = "355de1def999218e1097fdebe40a79ae9b10075a79af983ffd00e8587c75543d"

S = "${WORKDIR}/${PN}-${PV}"
