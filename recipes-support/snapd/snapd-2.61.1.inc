SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "7a85bfa27cec54ea37ed5a6ac2411df0"
SRC_URI[sha256sum] = "d92daf847e35302cb430bae55a4a03a8c879d5ef734cb6a48a6b57a2f67e0414"

S = "${WORKDIR}/${PN}-${PV}"
