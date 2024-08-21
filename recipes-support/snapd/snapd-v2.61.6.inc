SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "d46c4f4ac63667c03a9d511e565580f1"
SRC_URI[sha256sum] = "4d78a67022b82536c084ca8906fbf51c84b64902d02daff2ccb23b8e07d6f2fb"

S = "${WORKDIR}/${PN}-${PV}"
