[gcode_macro PIDBED]
description: PID BED
gcode:
    {% set pidb = params.pidb|default(45.0)|float %} 
    M117 Pid-autotune BED temp:{pidb}
    PID_CALIBRATE HEATER=heater_bed TARGET={pidb}