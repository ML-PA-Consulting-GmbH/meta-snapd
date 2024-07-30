SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "346e03b5608237a38803ae0046bd79ad"
SRC_URI[sha256sum] = "58b5ed84f56916e86365cb90c9c3bfdb7f77aee26f7c057402e4b9b58c714861"

S = "${WORKDIR}/${PN}-${PV}"
