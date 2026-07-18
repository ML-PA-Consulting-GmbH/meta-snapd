SUMMARY = "The snapd daemon and tool"
HOMEPAGE = "https://snapcraft.io"
LICENSE = "CLOSED"

PV = "v5.1.0+up2.75.2.1"

SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "81e6e51999ff6c6622f6e09832acaadd"
SRC_URI[sha256sum] = "0f3a8898f57a7f7f42d381e4dfceb437cdb5bb475d69697cc8a846a87dc0d9f71"
S = "${WORKDIR}/snapd-v${PV}"

inherit systemd autotools pkgconfig