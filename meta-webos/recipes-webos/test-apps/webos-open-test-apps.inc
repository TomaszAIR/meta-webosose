# Copyright (c) 2017-2022 LG Electronics, Inc.

SECTION = "webos/apps"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/Apache-2.0;md5=89aea4e17d99a7cacdbeed46a0096b10"

WEBOS_VERSION = "1.0.0-22_648edac42dfe23fda82f9e041d4f5b5e3c75479f"
INC_PR = "r6"

EXTRA_INHERIT ?= "webos_arch_indep webos_cmake"

inherit webos_component
inherit webos_enhanced_submissions
inherit webos_app
inherit webos_public_repo
inherit ${EXTRA_INHERIT}

WEBOS_REPO_NAME = "test-apps"
SRC_URI = "${WEBOSOSE_GIT_REPO_COMPLETE}"
S = "${WORKDIR}/git/${BPN}"

FILES:${PN} += "${webos_applicationsdir}"
