# Copyright (c) 2018-2022 LG Electronics, Inc.

EXTENDPRAUTO:append:rpi = "webosrpi1"

EXTRA_OECMAKE:append:rpi = " -DWEBOS_SOC:STRING=RPI"
