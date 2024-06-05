SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "eedc51e29f6142473e721e97dac59890"
SRC_URI[sha256sum] = "dce8d949b61f79102dbc51332c7cdb002a6a39b3bb6399c172502b4ae6c11121"

S = "${WORKDIR}/${PN}-${PV}"