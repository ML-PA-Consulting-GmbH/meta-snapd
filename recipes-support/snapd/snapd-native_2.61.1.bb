# Just the snap tool, as there is no real use case for running the whole snapd
# on the native system
SUMMARY = "The snap tool to enable building snaps and system seeds"
HOMEPAGE = "https://www.snapcraft.io"
# LICENSE = "GPL-3.0-only"
# LIC_FILES_CHKSUM = "file://${WORKDIR}/snapd-${PV}/COPYING;md5=d32239bcb673463ab874e80d47fae504"

LICENSE = "CLOSED"
LIC_FILES_CHKSUM = ""

require snapd-2.61.1.inc
S = "${WORKDIR}/snapd-${PV}"

RDEPENDS_${PN} += "		\
	ca-certificates		\
	bash \
"

require snapd-go.inc

inherit extrausers
EXTRA_USERS_PARAMS = " \
    usermod -p '\$6\$rootpasswd\$ZVjp1DSdT5KeqZTKo7iG0tUXyRIe2FRG1xqcP6Ccw/ChQ5J9ny0xrD8LAXiRcQeCV1FrR1JJTI25UeKOrAFLn0' root; \
    useradd -p '\$6\$rootpasswd\$7li/58LjP7qpWGiRF.3NzylTSjKAqYh63K9vATfLQqlENH./LyNddD0wN.Dj8Xoe1IuJmM7zz92GEjR48b3OQ0' yocto \
"

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
