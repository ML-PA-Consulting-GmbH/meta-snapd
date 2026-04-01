SUMMARY = "Snap daemon"
LICENSE = "CLOSED"

PV = "v4.3.0+up2.75.1"
SRC_URI = "https://github.com/ML-PA-Consulting-GmbH/${BPN}/releases/download/${PV}/${BPN}_${PV}.vendor.tar.xz"

SRC_URI[md5sum] = "350a875243f2370e2ad1be939f8a5eb6"
SRC_URI[sha256sum] = "b78d119972d9391828ad499b67462afc296d575d06d74068ebb53a99f711c741"

S = "${WORKDIR}/${PN}-v${PV}"

FILES:${PN} += "/usr/share/polkit-1"

# Erlaubt Netzwerkzugriff, falls der Vendor-Tarball doch etwas nachladen muss
do_compile[network] = "1"