require snapd.inc

SUMMARY = "Snap daemon"
DESCRIPTION = "Service to install and manage snap packages"
HOMEPAGE = "https://snapcraft.io"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = ""

PV = "2.72"

SRC_URI = "git://github.com/ML-PA-Consulting-GmbH/snapd.git;branch=release/2.72;protocol=https;destsuffix=git/"
SRCREV = "0e3d0cdfd838b7798c0f844aa6fb7dd2e90b81cc"

S = "${WORKDIR}/git"

FILES:${PN} += "/usr/share/polkit-1"
