SUMMARY = "A small demo image to demo snaps running on OpenEmbedded/Yocto"

inherit extrausers
EXTRA_USERS_PARAMS = " \
    usermod -p '\$6\$rootpasswd\$ZVjp1DSdT5KeqZTKo7iG0tUXyRIe2FRG1xqcP6Ccw/ChQ5J9ny0xrD8LAXiRcQeCV1FrR1JJTI25UeKOrAFLn0' root; \
    useradd -p '\$6\$rootpasswd\$7li/58LjP7qpWGiRF.3NzylTSjKAqYh63K9vATfLQqlENH./LyNddD0wN.Dj8Xoe1IuJmM7zz92GEjR48b3OQ0' yocto \
"

IMAGE_INSTALL = " \
    packagegroup-core-boot \
    ${CORE_IMAGE_EXTRA_INSTALL} \
    packagegroup-snapd \
    connman \
    bash \
    rpm \
"

IMAGE_LINGUAS = " "

LICENSE = "MIT"

inherit core-image

IMAGE_ROOTFS_SIZE ?= "819200"
IMAGE_ROOTFS_EXTRA_SPACE:append = "${@bb.utils.contains("DISTRO_FEATURES", "systemd", " + 4096", "" ,d)}"
