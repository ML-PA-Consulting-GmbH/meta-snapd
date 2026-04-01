# Just the snap tool, as there is no real use case for running the whole snapd
# on the native system
SUMMARY = "The snap tool to enable building snaps and system seeds"
HOMEPAGE = "https://www.snapcraft.io"
LICENSE = "CLOSED"
#LIC_FILES_CHKSUM = ""

require snapd-v4.3.0+up2.75.1.inc
S = "${WORKDIR}/${PN}-${PV}"

RDEPENDS_${PN} += "		\
	ca-certificates		\
	bash \
"

require snapd-go.inc

inherit native

do_configure() {
	snapd_go_do_configure
}

do_compile() {
	snapd_go_do_compile_snap
}

do_install() {
	install -d ${D}${bindir}
	install -m 0755 ${B}/${GO_BUILD_BINDIR}/snap ${D}${bindir}
}

RDEPENDS:${PN} += "squashfs-tools"

INHIBIT_SYSROOT_STRIP = "1"
