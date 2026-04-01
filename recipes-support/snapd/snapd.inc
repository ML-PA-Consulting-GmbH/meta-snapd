SUMMARY = "Snap daemon and tool"
HOMEPAGE = "https://snapcraft.io"
LICENSE = "CLOSED"

PV = "v4.3.0+up2.75.1"
SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"
SRC_URI[sha256sum] = "b78d119972d9391828ad499b67462afc296d575d06d74068ebb53a99f711c741"

S = "${WORKDIR}/snapd-${PV}"

do_compile[network] = "1"