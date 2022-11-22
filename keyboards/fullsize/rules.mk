# MCU name
MCU = at90usb1286

# Bootloader selection
BOOTLOADER = halfkay 

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = no # handle in callback