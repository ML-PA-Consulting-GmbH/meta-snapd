PR = "r0"

SUMMARY = "Snap daemon"
DESCRIPTION = "Service to install and manage snap packages"
HOMEPAGE = "https://snapcraft.io"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = ""

PV = "v4.3.0+up2.75.1"

SRC_URI = "git://github.com/ML-PA-Consulting-GmbH/snapd.git;branch=release/v4.3.0+up2.75.1;protocol=https;destsuffix=git/"
S = "${WORKDIR}/git"
SRCREV = "a469ad4d4f8ab5eee0c945b50d546faaf63e2db6"

S = "${WORKDIR}/git"

FILES:${PN} += "/usr/share/polkit-1"