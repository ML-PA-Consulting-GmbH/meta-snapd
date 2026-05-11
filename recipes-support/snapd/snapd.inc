SUMMARY = "The snapd daemon and tool"
HOMEPAGE = "https://snapcraft.io"
LICENSE = "CLOSED"

PV = "v5.0.0+up2.75.2.1"

SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/snapd/releases/download/${PV}/snapd_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "d60d69a877a951282541793aff60d1f9"
SRC_URI[sha256sum] = "ba5378254cfa961a9581f5add104beaeb98d78df4872344cac42fc0a529e0fe8"
S = "${WORKDIR}/snapd-v${PV}"

inherit systemd autotools pkgconfig