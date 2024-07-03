# Ignore some warnings during the build, likely to be fixed before RP2040 PR is merged
ALLOW_WARNINGS = yes

# LTO must be disabled for RP2040 builds
# LTO_ENABLE = no

# CONVERTER - if you use a listed MCU comment the first line and uncomment the appropiate line
# CONVERT_TO = promicro_rp2040
#CONVERT_TO = kb2040
#CONVERT_TO = blok
# CONVERT_TO = elite_pi
# CONVERT_TO = liatris

# PIN_COMPATIBLE - what pinout the mcu uses
# PIN_COMPATIBLE = elite_c
# PIN_COMPATIBLE = promicro

# AUDIO
# AUDIO_ENABLE = yes
AUDIO_DRIVER = pwm_hardware
# SPLIT_TRANSPORT = custom
