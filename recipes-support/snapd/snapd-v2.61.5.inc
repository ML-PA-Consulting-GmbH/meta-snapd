SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "2566248069f4f58961d7a9a37fe90b6f"
SRC_URI[sha256sum] = "67f65a3ea042002e3058c10f6c6d8c73e70cf43f1c55f8f0d7408a5b57e57d5a"

S = "${WORKDIR}/${PN}-${PV}"
