PR = "r0"

SUMMARY = "Snap daemon"
DESCRIPTION = "Service to install and manage snap packages"
HOMEPAGE = "https://snapcraft.io"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = ""

PV = "v4.3.0+up2.75.1"

SRC_URI = "git://github.com/ML-PA-Consulting-GmbH/snapd.git;tag=${PV};protocol=https;branch=master"
#SRCREV = "${AUTOREV}"

S = "${WORKDIR}/git"

FILES:${PN} += "/usr/share/polkit-1"