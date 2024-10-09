# Copyright (c) 2024 Kuba Birecki
# SPDX-License-Identifier: MIT

zephyr_library_amend()

zephyr_library_sources_ifdef(CONFIG_LED_STRIP_IS31FL3743A led_strip_is31fl3743a.c)
