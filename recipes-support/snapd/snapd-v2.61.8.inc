SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "35df4cbe48b855634eb605aa11b20fc6"
SRC_URI[sha256sum] = "ffcd2213fb8afa570c76b16a9ab6922c79a7451a51ae07497ce3f724880e74c9"

S = "${WORKDIR}/${PN}-${PV}"
