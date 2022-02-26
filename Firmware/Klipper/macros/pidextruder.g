[gcode_macro PIDEXTRUDER]
description: PID EXTRUDER
gcode:
    {% set pide = params.pide|default(190.0)|float %} 
    M117 Pid-autotune BED extruder:{pide}
    PID_CALIBRATE HEATER=extruder TARGET={pide}