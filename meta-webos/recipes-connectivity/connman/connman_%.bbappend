# Copyright (c) 2018-2022 LG Electronics, Inc.

FILESEXTRAPATHS:prepend := "${THISDIR}/${BPN}:"

EXTENDPRAUTO:append = "webos22"
SYSTEMD_SERVICE:${PN}:remove = "connman.service"

WEBOS_VERSION = "1.41-4_24e5f79bc8c9b004ac7809c1811202be3d96815d"
WEBOS_REPO_NAME = "connman-webos"
SRC_URI = "${WEBOSOSE_GIT_REPO_COMPLETE}"
S = "${WORKDIR}/git"

inherit webos_component
inherit webos_public_repo
inherit webos_enhanced_submissions

do_install:append() {
    rm -vf ${D}${systemd_unitdir}/system/connman.service
}
