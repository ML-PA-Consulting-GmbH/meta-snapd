SUMMARY = "Package group providing snap support"
PR = "r0"

inherit packagegroup

RDEPENDS:${PN} = " \
  snapd \
"
