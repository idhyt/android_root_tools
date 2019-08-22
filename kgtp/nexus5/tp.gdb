## gdb script

# set log file
set logging on gdb.log

# set your tracepoint
# trace drivers/tty/tty_io.c:2007
# trace drivers/input/input.c:871
# trace drivers/tty/vt/consolemap.c:617
trace tc_ctl_tfilter

# trace begin
actions
collect $bt
collect $reg
end
tstart
# shell ./tp.sh
# tstop
# tfind
# bt
# info reg
