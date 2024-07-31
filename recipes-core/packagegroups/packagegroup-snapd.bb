SUMMARY = "Package group providing snap support"
PR = "r0"

inherit extrausers
EXTRA_USERS_PARAMS = " \
    usermod -p '\$6\$rootpasswd\$ZVjp1DSdT5KeqZTKo7iG0tUXyRIe2FRG1xqcP6Ccw/ChQ5J9ny0xrD8LAXiRcQeCV1FrR1JJTI25UeKOrAFLn0' root; \
    useradd -p '\$6\$rootpasswd\$7li/58LjP7qpWGiRF.3NzylTSjKAqYh63K9vATfLQqlENH./LyNddD0wN.Dj8Xoe1IuJmM7zz92GEjR48b3OQ0' yocto \
"

inherit packagegroup

RDEPENDS:${PN} = " \
  snapd \
"
