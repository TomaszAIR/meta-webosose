# Copyright (c) 2012-2022 LG Electronics, Inc.

DESCRIPTION = "CMake modules used by webOS"
LICENSE = "Apache-2.0"
AUTHOR = "Vijaya Sundaram <vijaya.sundaram@lge.com>"
SECTION = "webos/devel/tools"
LIC_FILES_CHKSUM = "file://LICENSE;md5=89aea4e17d99a7cacdbeed46a0096b10"

WEBOS_VERSION = "1.6.3-5_7056e27bcabc4656baa1a4e972a7b0f345f4b02d"
PR = "r4"

inherit webos_component
inherit webos_public_repo
inherit webos_enhanced_submissions
inherit webos_cmake
inherit native

WEBOS_CMAKE_DEPENDS = ""

SRC_URI = "${WEBOSOSE_GIT_REPO_COMPLETE}"
S = "${WORKDIR}/git"

do_compile() {
     :
}

# From http://gpro.lge.com/255718 http://gpro.lge.com/255719
SRC_URI += " \
    file://0001-_webos_init_install_vars-add-variables-originally-im.patch \
    file://0002-_webos_init_install_vars-change-webos_testsdir-defau.patch \
"
