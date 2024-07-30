SRC_URI = "https://ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}-yocto.vendor.tar.xz"

SRC_URI[md5sum] = "45cad7ab0e3d989df408c37ee1b9a0e0"
SRC_URI[sha256sum] = "9c7a89e774f70020eea97a028eca7f7e34d68677e92c0cba37b615449fe08ea4"

S = "${WORKDIR}/${PN}-${PV}"
