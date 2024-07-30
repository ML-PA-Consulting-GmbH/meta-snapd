SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "e34a1b4076142168c48c53283ad3045b"
SRC_URI[sha256sum] = "97cbcc3a91f03300dc472ffaf3ec4d376bc5de0f788efee0e313a695db97b5b7"

S = "${WORKDIR}/${PN}-${PV}"
